class Solution {
public:
    vector<int> parent;
    vector<int> size;
    void init() {
        parent = vector<int>(26, 0);
        size = vector<int>(26, 0);
    }
    void make_set(int v) {
        parent[v] = v;
        size[v] = 1;
    }
    int find_set(int v) {
        if(parent[v] == v)
            return v;
        return parent[v] = find_set(parent[v]);
    }
    void union_set(int v, int u) {
        int a = find_set(v);
        int b = find_set(u);
        if(a != b) {
            if(size[a] < size[b]) {
                swap(a, b);
            }
            parent[b] = a;
            size[a] += size[b];
        }
    }
    bool equationsPossible(vector<string>& equations) {
        init();
        for(string s : equations) {
            make_set(s[0]-'a');
            make_set(s[3]-'a');
        }
        for(string s : equations) {
            int a = s[0]-'a';
            int b = s[3]-'a';
            char sign = s[1];
            if(sign == '=') {
                union_set(a, b);
            }
        }
        for(string s : equations) {
            int a = s[0]-'a';
            int b = s[3]-'a';
            char sign = s[1];
            if(sign == '!') {
                int pa = find_set(a);
                int pb = find_set(b);
                if(pa == pb)
                    return false;
            }
        }
        return true;
    }
};