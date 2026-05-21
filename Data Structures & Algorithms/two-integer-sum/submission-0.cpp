class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        int diff = 0;
        for(int i=0;i<nums.size();i++){
            diff = target - nums[i];
            if(um.count(diff)){
                return {um[diff],i};
            }else{
                um[nums[i]] = i;
            }
        }
        return {};
    }
};
