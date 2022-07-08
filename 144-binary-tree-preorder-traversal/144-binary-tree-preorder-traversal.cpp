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
    void preorderHelper(vector<int> &ans, TreeNode *root) {
        if(root == NULL)
            return;
        
        ans.push_back(root->val);
        preorderHelper(ans, root->left);
        preorderHelper(ans, root->right);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans; 
        preorderHelper(ans, root);
        return ans;
    }
};