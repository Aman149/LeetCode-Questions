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
    vector<int> elements;
    
    void bfs(TreeNode *root) {
        if(root == NULL)
            return;
        bfs(root->left);
        elements.push_back(root->val);
        bfs(root->right);
    }
    
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        bfs(root1);
        bfs(root2);
        sort(elements.begin(), elements.end());
        return elements;
    }
};