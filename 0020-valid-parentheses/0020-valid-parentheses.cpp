class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int iterator = 0;
        int stringSize = s.size();
        while(iterator < stringSize ) {
            char currBrac = s[iterator++];
            if(currBrac != ')' && currBrac != ']' && currBrac != '}' ) {
                st.push(currBrac);
            }
            else {
                if(st.empty())
                    return false;
                char temp = st.top();
                st.pop();
                if((temp == '[' && currBrac != ']') || 
                   (temp == '(' && currBrac != ')') ||
                   (temp == '{' && currBrac != '}'))
                    return false;
            }
        }
        return st.empty();
    }
};