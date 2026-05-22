class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;
        for (string s : strs) {
            vector<int> alpha(26, 0);
            for (char c : s) {
                alpha[c - 'a']++;
            }
            string k = createString(alpha);
            um[k].push_back(s);
            // break;
        }
        vector<vector<string>> v;
        for (auto const& [key, val] : um) {
            v.push_back(val);
        }
        return v;
    }

    string createString(vector<int>& alpha) {
        string s = "";
        for(int i:alpha){
            s+= to_string(i) + '#';
        }
        return s;
    }
};
