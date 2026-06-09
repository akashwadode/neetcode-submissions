class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j=nums.size()-1;
        while(i<=j){
            int mid = (j+i)/2;
            // cout << "i=" << nums[i] << " j=" << nums[j] << " -> " << nums[mid] << endl;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return -1;
    }
};
