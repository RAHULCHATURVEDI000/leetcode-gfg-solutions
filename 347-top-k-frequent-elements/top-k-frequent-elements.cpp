class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int n : nums) {
            mp[n]++;
        }
        vector<pair<int, int>> freqVec;
        for (const auto& pair : mp) {
            freqVec.push_back(pair);
        }
     sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        vector<int> result;
        for (int i = 0; i < k; ++i) {
    
            result.push_back(freqVec[i].first);
        }
        
        return result;
    }
};