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
    int maxlength = 0;
    void dfsHelper(TreeNode* root, int dir, int currLength) {
        if(root == NULL)
            return;
        maxlength = max(currLength, maxlength);
        dfsHelper(root->left, 0, dir?currLength+1:1);
        dfsHelper(root->right, 1, dir?1:currLength+1);
    }
public:
    int longestZigZag(TreeNode* root) {

        dfsHelper(root, 0, 0);
        dfsHelper(root, 1, 0);
        return maxlength;
    }
};