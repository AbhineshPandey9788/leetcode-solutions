class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        vector<vector<int>>sol;

        for(int i=0; i<nums.size(); i++){

            if(i>0 && nums[i]==nums[i-1])
                continue;

            int target = -nums[i];

            int p1 = i+1;
            int p2 = nums.size()-1;

            while(p1<p2){
                if(target == nums[p1]+nums[p2]){
                    sol.push_back({nums[i],nums[p1],nums[p2]});
                    int prev = p1;
                    int prevv = p2;
                    p1++;
                    p2--;
                    while(p1<p2 && nums[prev]==nums[p1]){
                        p1++;
                    }
                    while(p1<p2 && nums[prevv]==nums[p2]){
                        p2--;
                    }
                }
                else if(target > nums[p1]+nums[p2]){
                    p1++;
                }
                else{
                    p2--;
                }
            }
        }
        return sol;
    }
};