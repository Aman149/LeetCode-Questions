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
    int count = 0;
    void dfs(TreeNode *root, int currMax) {
        if(root == NULL)
            return;
        if(root->val >= currMax) {
            currMax = root->val;
            count++;
        }
        
        dfs(root->left, currMax);
        dfs(root->right, currMax);
    }
public:
    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return count;
    }
};