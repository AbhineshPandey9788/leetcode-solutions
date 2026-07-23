class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        //bit manipulatioin 

        int ans = 0;

        for(int it : nums){
            ans ^= it;
        }

        unsigned int mask = (unsigned int)ans & (-(unsigned int)ans);

        int a = 0, b = 0; 

        for(int it : nums){
            if(it & mask){
                a ^= it;
            }
            else{
                b^=it;
            }
        }
        vector<int> sol = {a,b};
        return sol;
    }
};