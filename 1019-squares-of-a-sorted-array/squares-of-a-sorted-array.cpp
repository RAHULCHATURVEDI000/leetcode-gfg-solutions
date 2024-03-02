class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int > hover;
        int element;
        for(int i=0;i<nums.size();i++)
        {
           element =pow(nums[i],2);
            hover.push_back(element);

         
        }
              sort(hover.begin(),hover.end());
            return hover;
    }
};