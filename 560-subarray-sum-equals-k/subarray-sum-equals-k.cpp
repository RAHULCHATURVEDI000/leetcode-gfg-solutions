class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        vector<int> prefix(n);
        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = nums[i] + prefix[i - 1];
        }

        unordered_map<int, int> mp;

        for (int j = 0; j < n; j++) {
            if (prefix[j] == k)
                ans++;

            if (mp.find(prefix[j] - k) != mp.end()) {
                ans += mp[prefix[j] - k];
            }

            mp[prefix[j]]++;
        }

        return ans;
    }
};
