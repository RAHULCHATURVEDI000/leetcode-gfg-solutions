class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi = 0; 
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxi) {

                return false;
            }
       
            maxi = max(maxi, i + nums[i]);
        }

        return true;
    }
};
