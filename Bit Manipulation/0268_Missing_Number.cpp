class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //using bit manipulation technique
        int ans = 0;
        int indices = 0;

        for(int i=0; i<nums.size(); i++){
            ans ^= nums[i];
            indices ^= i;
        }
        indices ^= nums.size();

        return indices^ans;
    }
};