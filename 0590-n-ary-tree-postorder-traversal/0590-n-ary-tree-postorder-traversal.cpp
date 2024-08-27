/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        stack<Node*> st;
        vector<int> ans;
        if(root == NULL)
            return ans;
        st.push(root);

        while(!st.empty()) {
            Node* curr = st.top();
            st.pop();

            // Insert the current node's value at the beginning of the result list
            ans.insert(ans.begin(), curr->val);

            // Push all the children of the current node onto the stack
            for(auto child : curr->children) {
                if(child != NULL)
                    st.push(child);
            }
            
        }

        return ans;
    }
};