class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> n;
        for(int i:nums){
            if(n.count(i)){
                return true;
            }else{
                n.insert(i);
            }
        }        
    return false;
    }
};