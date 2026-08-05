class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int ans = 0;
        int max_freq = 0;

        unordered_map<char,int>freq;

        for(int j=i; j<s.size(); j++){
            freq[s[j]]++;
            max_freq = max(max_freq,freq[s[j]]);

            if((j-i+1) - max_freq > k){
                freq[s[i]]--;
                i++;
            }

            ans = max(ans, j-i+1);
        }
        return ans;
    }
};