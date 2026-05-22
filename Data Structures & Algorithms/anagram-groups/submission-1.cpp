class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;
        for(string s : strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            um[temp].push_back(s);
        }

        vector<vector<string>> v;
        v.reserve(um.size());
        for(auto& pair : um){
            v.push_back(move(pair.second));
        }
        return v;
        
    }

    
};
