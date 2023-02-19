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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        int currLevel = 1 ;
        
        while(q.empty() == false) {
            int size = q.size();
            vector<int> level;
            
            for(int i=0; i<size; i++) {
                TreeNode *curr = q.front();
                q.pop();
                
                level.push_back(curr->val);
                
                if(curr->left)
                    q.push(curr->left);
                
                if(curr->right)
                    q.push(curr->right);
            }
            
            if(currLevel%2 == 0)
                reverse(level.begin(), level.end());
            
            ans.push_back(level);
            currLevel++;
        }
        return ans;
    }
};