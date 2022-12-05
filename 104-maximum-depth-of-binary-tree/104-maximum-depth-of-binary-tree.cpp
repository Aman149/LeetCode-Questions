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
    int maxLevel = 0;
    
    int maxDepthHelper(TreeNode *root, int currLevel) {
        
        if(root == NULL)
            return maxLevel;
        
        if(currLevel > maxLevel)
            maxLevel = currLevel;
        
        return max(maxDepthHelper(root->left, currLevel+1),maxDepthHelper(root->right, currLevel+1));
    }
    
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return maxLevel;
        
        return maxDepthHelper(root, 1);
    }
};