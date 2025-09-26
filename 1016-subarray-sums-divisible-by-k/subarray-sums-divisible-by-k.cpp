class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
                vector<int> answer(k,0);
        answer[0]=1;
        int count=0;
        int psum=0;
        for(int num:nums){
            psum+=num;
            int rem=(psum%k+k)%k;
            count+=answer[rem];
            answer[rem]++;
        }
        return count;
    }
};