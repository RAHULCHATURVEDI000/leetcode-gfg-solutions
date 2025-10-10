class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto [key,value]:mp){
            if(value>arr.size()/3){
                ans.push_back(key);
            }
        }
        sort(ans.begin(),ans.end());
        return ans ;
    }
};