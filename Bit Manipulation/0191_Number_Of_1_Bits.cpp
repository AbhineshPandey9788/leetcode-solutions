class Solution {
public:
    int hammingWeight(int n) {
        // counting the set bits
        
        int count = 0;

        while(n>0){
            count ++;
            n = n & (n-1);
        }

        return count;
    }
};