class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int balance = 0;
        int start = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                if (balance == 0) {
                    start = i;
                }
                ++balance;
            } else {
                --balance;
                if (balance == 0) {
                    result += s.substr(start + 1, i - start - 1);
                }
            }
        }
        return result;
    }
};
