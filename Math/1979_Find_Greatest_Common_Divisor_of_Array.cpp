class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int small = nums[0];
        int big = nums[nums.size()-1];

        if(small == big ){
            return small;
        }
        else{
            int ans = 1;
            for(int i=1; i<=small; i++){
                if(big%i == 0){
                    ans = i;
                }
            }
            return ans;
        }
    }
}; 