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
    
    int find(TreeNode* root, int &k) {
        if(root == NULL)
            return 0;
        
        int left = find(root->left, k);
        if(left)
            return left;
            
        k-=1;
        if(k==0)
            return root->val;
            
        int right = find(root->right, k);
        return right;
    }
    
public:
    int kthSmallest(TreeNode* root, int k) {
        return find(root, k);
    }
};