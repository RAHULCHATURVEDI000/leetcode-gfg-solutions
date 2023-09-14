class Solution {
public:
    bool isPalindrome(int x) {
       
        string a=to_string(x);
reverse(a.begin(),a.end());
   long b=stol(a);
        if(b==x)
            return true;
        else
            return false;
        
    }
};