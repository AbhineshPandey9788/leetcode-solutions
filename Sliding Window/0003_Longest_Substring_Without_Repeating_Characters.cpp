class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int count = 0;

        unordered_set<char>st;

        for(int j = i; j<s.size(); j++){
            while(st.find(s[j])!=st.end()){
                st.erase(s[i]);
                i++;
            }
            count = max(count, j-i+1);
            st.insert(s[j]);
        }
        return count;
    }
};