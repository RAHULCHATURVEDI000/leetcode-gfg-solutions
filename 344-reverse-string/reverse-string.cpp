class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> machine;
        for(int i=0;i<s.size();i++){
                machine.push(s[i]);
        }
            for(int i=0;i<s.size();i++)
            {
                s[i]=machine.top();
                machine.pop();
            }
    }
};