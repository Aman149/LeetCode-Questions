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
            minDiff = min(minDiff, abs(root->val-prevHead));
        prevHead = root->val;
        helper(root->right, prevHead, minDiff);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        int minDiff = INT_MAX;
        int prevHead = -1;
        helper(root, prevHead, minDiff);
        return minDiff;
    }
};