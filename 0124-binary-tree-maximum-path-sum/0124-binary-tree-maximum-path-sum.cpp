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
    int dfs(TreeNode* root, int &maxSum) {
        if(root == NULL)
            return 0;
        int lmax = dfs(root->left, maxSum);
        int rmax = dfs(root->right, maxSum);
        maxSum = max({lmax+root->val, rmax+root->val, rmax+lmax+root->val, maxSum, root->val});
        return max(root->val+max(lmax, rmax), root->val);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        dfs(root, maxSum);
        return maxSum;
    }
};