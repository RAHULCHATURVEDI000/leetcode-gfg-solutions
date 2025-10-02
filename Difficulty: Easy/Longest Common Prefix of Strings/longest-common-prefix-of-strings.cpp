// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        bool match=true;
        if(arr.empty())
        return "";
        string ans="";
        for(int i=0;i<arr[0].size();i++){
            char ch=arr[0][i];
            for(int j=1;j<arr.size();j++){
                if(i>=arr[j].size()||ch!=arr[j][i]){
                match = false;
                break;
                }
            }
              if(match)
        ans.push_back(ch);
        else break;
        }
      
        return ans;
        
    }
};