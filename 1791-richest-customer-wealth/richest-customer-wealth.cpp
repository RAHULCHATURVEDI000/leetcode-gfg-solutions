class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxw=0;
        for(int i=0;i<accounts.size();i++){
                int cw=0;
            for(int j=0;j<accounts[i].size();j++)
            {
              cw+=accounts[i][j];
            }
           maxw=max(maxw,cw);
        }
return maxw;
    }
    
};