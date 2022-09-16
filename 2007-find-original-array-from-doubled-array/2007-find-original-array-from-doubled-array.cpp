class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size() % 2)
            return {};
        int hash[100001] = {0}, maxs = INT_MIN;
        for(int i = 0; i < changed.size(); i++)
        {
            hash[changed[i]]++;
            maxs = max(changed[i] , maxs);
        }
        vector<int> a;
        for(int i = 0; i <= maxs/2; i++)
        {
            while(hash[i] != 0)
            {
                if(hash[2*i] > 0 && hash[2 * i]-- > 0)
                {
                    a.push_back(i);
                }
                else
                    return {};
                hash[i]--;
            }
        }
        if(a.size() == changed.size()/2)
        {
            return a;
        }
        else
					return {};
    }
};