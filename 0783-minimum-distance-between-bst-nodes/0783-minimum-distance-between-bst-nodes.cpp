/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void helper(TreeNode* root, int &prevHead, int &minDiff) {
        if(root == NULL)
            return;
        helper(root->left, prevHead, minDiff);
        if(prevHead != -1)
            minDiff = min(minDiff, abs(prevHead-root->val));
        prevHead = root->val;
        helper(root->right, prevHead, minDiff);
    }
public:
    int minDiffInBST(TreeNode* root) {
        int prevHead = -1;
        int minDiff = INT_MAX;
        helper(root, prevHead, minDiff);
        return minDiff;
    }
};