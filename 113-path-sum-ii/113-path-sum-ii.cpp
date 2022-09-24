class Solution {
    void hero(TreeNode* root,int targetSum,vector<int>& res,vector<vector<int>>& ans){
        if(!root)return;
        if(root->left==NULL and root->right==NULL){
            res.push_back(root->val);
            if(targetSum-root->val==0){
                ans.push_back(res);
            }
            res.pop_back();
        }
        res.push_back(root->val);
        hero(root->left,targetSum-root->val,res,ans);
        hero(root->right,targetSum-root->val,res,ans);
        res.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> res;
        hero(root,targetSum,res,ans);
        return ans;
    }
};