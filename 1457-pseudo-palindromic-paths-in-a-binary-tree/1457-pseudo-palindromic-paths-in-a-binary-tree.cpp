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
public:
    void dfs(TreeNode*root, unordered_map<int,int>&mp, int &ans){
        if(!root) return;
        mp[root->val]++;
        if(!root->left and !root->right){
            int count = 0;
            for(auto it : mp){
                if(it.second % 2 != 0) count++;
            }
            if(count <= 1) ans++;
        }
        dfs(root->left,mp,ans);
        dfs(root->right,mp,ans);
        mp[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int ans = 0;
        unordered_map<int,int>mp;
        dfs(root,mp,ans);
        return ans;
    }
};
