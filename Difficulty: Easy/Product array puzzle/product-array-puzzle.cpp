// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
       vector<int> res(arr.size());
       res[0]=1;
       for(int i=1;i<arr.size();i++){
           res[i]=res[i-1]*arr[i-1];
       }
       int sufprod=1;
       for(int i=arr.size()-1;i>=0;i--){
           res[i]*=sufprod;
           sufprod*=arr[i];
       }
       return res;
    }
};
