class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())
        return -1;
            int a=needle.size();
            int b=haystack.size();
            for(int i=0;i<=b-a;i++)
            {
                string s=haystack.substr(i,a);
                if(s==needle)
                return i;
            }

        return -1;
    }
};