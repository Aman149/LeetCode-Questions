class Solution {
    vector<string> keypad {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    
    void helper(string digit, string output, int idx, vector<string>& ans) {
        
        //base case
        if(idx >= digit.length()){
            ans.push_back(output);
            return;
        }
        
        int num = digit[idx] - '0';
        string value = keypad[num];
        
        for(int i = 0; i < value.length(); i++){
            output.push_back(value[i]);
            helper(digit, output, idx + 1, ans);
            output.pop_back();
        }
        
    }
    
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans; 
        if(digits.length() == 0)
            return ans;
        string output;
        int idx = 0;
        helper(digits, output, idx, ans);
        return ans;
    }
};