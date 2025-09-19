class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> help(gain.size()+1, 0);   
        for (int i = 1; i <= gain.size(); i++) {
            help[i] = help[i-1] + gain[i-1];  
        }
        return *max_element(help.begin(), help.end());
    }
};
