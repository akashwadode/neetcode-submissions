class Solution {
public:
    bool isAnagram(string s, string t) {
        int lenS = s.size()-1, lenT = t.size()-1,i=0;
        unordered_map<char,int> um;
        while(i<=lenS && i<=lenT){
            um[s[i]]++;
            um[t[i]]--;
            i++;
        }
        while(i<=lenS){
            um[s[i]]++;
            i++;
        }
        while(i<=lenT){
            um[t[i]]--;
            i++;
        }

        for(const auto& pair:um){
            // cout << pair.first << " : " << pair.second << endl;
            if(pair.second !=0){
                return false;
            }
        }
        return true;
    }
};
