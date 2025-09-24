class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int maxt=0;
        for(auto c:arr){
         
                maxt=max(maxt,c);
                
        }
          for(auto c:dep){
      
            maxt=max(maxt,c);
                
        }
        vector<int> timeline(maxt+2,0);
        for(int a:arr){
            timeline[a]++;
        }
        for(int b:dep){
            timeline[b+1]--;
        }
        int cp=0;
        int mp=0;
        for(int i=0;i<timeline.size();i++){
            cp+=timeline[i];
            if(cp>mp)
            mp=cp;
            
        }
        return mp;
        
    }
};
