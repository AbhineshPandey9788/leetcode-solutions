class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = 1;
        if(nums[nums.size()-1]<0){
            maxi = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        }
        else if(nums[nums.size()-1]>0 && nums[nums.size()-2]<0){
            maxi = nums[nums.size()-1]*nums[0]*nums[1];
        }
        else {
            maxi = max(nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3], nums[nums.size()-1]*nums[0]*nums[1]);
        }
        return maxi;
    }
};