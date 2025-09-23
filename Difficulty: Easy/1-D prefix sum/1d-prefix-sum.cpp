class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        vector<int> result(arr.size());
        for(int i=0;i<arr.size();i++){
            result[i]=result[i-1]+arr[i];
        }
       return result;
        
    }
};