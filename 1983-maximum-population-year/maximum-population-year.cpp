class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int offset=1950;
        vector<int> change(101,0);
         for(const auto  &person:logs){
            int birthyear=person[0];
            int deathyear=person[1];

             change[birthyear-offset]++;
               change[deathyear-offset]--;

         }
         int mpop=0;
         int cpop=0;
         int eyear=1950;
         for(int i=0;i<change.size();i++){
            cpop+=change[i];
            if(cpop>mpop){
                mpop=cpop;
                eyear=i+offset;
            }
         }
       
       return eyear;

    }
};