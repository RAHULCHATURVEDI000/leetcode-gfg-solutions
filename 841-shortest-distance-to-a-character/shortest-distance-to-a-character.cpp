class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int> answer(n,INT_MAX);

        int prev=-n;
        for(int i=0;i<n;i++){
            if(s[i]==c) prev =i;
            answer[i]=min(answer[i],abs(i-prev));
        }
        prev=2*n;
        for(int i=n-1;i>=0;i--){
            if(s[i]==c) prev=i;
            answer[i]=min(answer[i],abs(i-prev));
        }
        return answer;

    }
};