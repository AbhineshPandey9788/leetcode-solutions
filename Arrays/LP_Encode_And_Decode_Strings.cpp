class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for(string ch : strs){
            encoded += to_string(ch.length())+"#"+ch;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        int i = 0;
        while(i<s.length()){

            int x = 0;

            while(s[i] != '#'){
                x = x*10 + (s[i] - '0');
                i++;
            }

            string ch;
            i++;
            for(int p=i; p<i+x; p++){
                ch += s[p];
            }
            decoded.push_back(ch);
            i += x;
        }
        return decoded;
    }
};
