class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;             
        int sum = 0;              
        int len=INT_MAX ;        
        
        for (int high = 0; high < nums.size(); high++) {
            sum += nums[high];   
            
            while (sum >= target) {
                len = min(len, high - low + 1); 
                sum -= nums[low];    
                low++;               
            }
        }
        
      
        return len == INT_MAX ? 0 : len;
    }
};
