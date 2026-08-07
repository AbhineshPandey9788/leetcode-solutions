class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()){
            return "";
        }
        unordered_map<char,int>mp;
        
        for(char x: t){
            mp[x]++;
        }

        int i = 0;
        int x = t.size();
        int start = 0;
        int min_len = INT_MAX;

        for(int j = 0; j<s.size(); j++){
            if(mp[s[j]]>0){
               x--;
            }
            mp[s[j]]--;

            while(x == 0){
                if((j-i+1)<min_len){
                    min_len = j-i+1;
                    start = i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    x++;
                }
                i++;
            }
        }
        if(min_len == INT_MAX)
            return "";
        return s.substr(start, min_len);
    }
};