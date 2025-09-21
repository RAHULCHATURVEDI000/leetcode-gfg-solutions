class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int freq[26]={0};
        for(char c:s){
            freq[c-'a']++;
        }
        int maxf=0;
        char ans='a';
        for (int i = 0; i < 26; i++) {
    if (freq[i] > maxf) {
        maxf = freq[i];
        ans = 'a' + i;
    }
}
return ans;
    }
};