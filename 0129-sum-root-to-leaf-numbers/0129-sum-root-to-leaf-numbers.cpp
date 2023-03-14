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
    int sum = 0;
    void helper(TreeNode* root, string rootToLeafSum) {
        if(root == NULL) 
            return;
        
        rootToLeafSum = rootToLeafSum + to_string(root->val);
        
        if(root->left == NULL && root->right == NULL)
            sum += stoi(rootToLeafSum);
        
        helper(root->left, rootToLeafSum);
        helper(root->right, rootToLeafSum);
        
    }
public:
    int sumNumbers(TreeNode* root) {
        if(root == NULL)
            return sum;
        helper(root, "");
        return sum;
    }
};