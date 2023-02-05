class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int s_len = s.length();
        int p_len = p.length();
        
        if(s.size() < p.size()) return {};

        vector<int> freq_p(26,0);
        vector<int> window(26,0);

        //First window
        for(int i=0; i<p_len; i++) {
            freq_p[p[i] - 'a']++;
            window[s[i] - 'a']++;
        }

        vector<int> ans;
        if(freq_p == window)
            ans.push_back(0);

        for(int i=p_len; i<s_len; i++) {
            //To maintain the window size of p_len
            //Remove from start and keep including ith element
            window[s[i-p_len] - 'a']--;
            window[s[i] - 'a']++;

            if(window == freq_p)
                ans.push_back(i-p_len+1);
        }
        return ans;
    }
};