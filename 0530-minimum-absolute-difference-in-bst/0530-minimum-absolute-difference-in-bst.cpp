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
    void inorder(vector<int>& inord, TreeNode* root){
        if(root==NULL) return;
        inorder(inord, root->left);
        inord.push_back(root->val);
        inorder(inord, root->right);
    }
    
    
public:
    int getMinimumDifference(TreeNode* root) {
        
        vector<int> inord;
        inorder(inord, root);
        int mini = INT_MAX;
        int N = inord.size();
        
        for(int i=0; i<N-1; i++){
            mini = min(mini, inord[i+1]-inord[i]);
        }
        
        return mini;
    }
};