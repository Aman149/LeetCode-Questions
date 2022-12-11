class Solution {
public:
    int dfs(TreeNode* root,int& ans){
        if(!root)return 0;
        int lmax= dfs(root->left,  ans);
        int rmax= dfs(root->right, ans);
        ans= max({lmax+root->val, rmax+root->val, rmax+lmax+root->val, ans, root->val});
        return max(root->val+max(lmax, rmax), root->val);
    }
    int maxPathSum(TreeNode* root) {
        int ans=root->val;
        int k= dfs(root,ans);
        return ans;
    }
};