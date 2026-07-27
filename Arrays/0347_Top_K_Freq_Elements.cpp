class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        vector <int> arr;

        for(int i=0; i<k; i++){
            int max = 0;
            int element = 0;
            for(auto x : mp){
                if (x.second > max){
                    max = x.second;
                    element = x.first;
                }
            }
            arr.push_back(element);
            mp[element] = 0;
        }
        return arr;
    }
};