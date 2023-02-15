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
    int dfs(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        int lh = dfs(root->left);
        int rh = dfs(root->right);
        
        if(lh == -1 || rh == -1 || abs(lh-rh) > 1)
            return -1;

        return (max(lh,rh)+1);
    }
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root) != -1;
    }
};