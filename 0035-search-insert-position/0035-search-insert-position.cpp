class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i,j;
        for(int i=0;i<nums.size();i++){
        if(nums[i]==target)
        return i;
        }
        for(int j=nums.size()-1;j>=0;j--){
        if(nums[j]<target)
        return j+1;
      
        else if(nums[0]>target)
        return 0;
       
        }

       return nums.size();
    }
};