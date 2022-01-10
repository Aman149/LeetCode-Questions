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
    
    void inorderHelper(vector<int> &nodes, TreeNode* root) {
        if(root == NULL)
            return;
        else
            inorderHelper(nodes, root->left);
            nodes.push_back(root->val);
            inorderHelper(nodes, root->right);
    }
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
      vector<int> ans;
        inorderHelper(ans, root);
        return ans;
    }
};