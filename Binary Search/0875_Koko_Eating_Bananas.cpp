class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 0;
        for(int x: piles){
            if(x>max){
                max = x;
            }
        }

        int p1 = 1;
        int p2 = max;
        int ans = p2;

        while(p1<=p2){
            int mid = p1 + (p2-p1)/2;
            long long hours = 0;

            for(int x : piles){
                hours += x/mid;
                if(x%mid != 0){
                    hours++;
                }
            }
            if(hours <= h){
                p2 = mid - 1;
                ans = mid;
            }
            else{
                p1 = mid + 1;
            }
        }
        return ans;
    }
};