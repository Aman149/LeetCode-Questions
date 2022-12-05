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
        int count = 1;
        
        while(q.empty() == false) {
            vector<int> currLevel;
            int n = q.size();
            
            for(int i=0; i<n; i++) {
                TreeNode *curr = q.front();
                q.pop();
                
                currLevel.push_back(curr->val);
                
                if(curr->left)
                    q.push(curr->left);
                
                if(curr->right)
                    q.push(curr->right);
            }
            
            if(count%2 == 0) {
                reverse(currLevel.begin(), currLevel.end());
                ans.push_back(currLevel);
            }
            else {
                ans.push_back(currLevel);
            }
                
            count++;
        }
        
        return ans;
    }
};