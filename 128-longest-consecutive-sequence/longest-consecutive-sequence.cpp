class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        unordered_set<int> numset(nums.begin(),nums.end());
        int length=0;
        int longest=1;
        for(auto n:numset){
            if(numset.find(n-1)==numset.end()){
                length=1;
                while(numset.find(n+1)!=numset.end()){
                    n++;
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};