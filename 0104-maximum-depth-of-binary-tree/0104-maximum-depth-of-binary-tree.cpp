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
    int maxHeight = 0;
    void height(TreeNode* root, int currHeight) {
        if(root == NULL)
            return;
        if(currHeight > maxHeight)
            maxHeight = currHeight;
        height(root->left, currHeight+1);
        height(root->right, currHeight+1);
    }
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        height(root, 1);
        return maxHeight;
    }
};