class Solution {
public:
    string getSmallestString(string s) {
        for (int i = 1, n = s.length(); i < n; ++i) {
            if ((s[i - 1] & 1) == (s[i] & 1) && s[i - 1] > s[i]) {
                swap(s[i], s[i - 1]);
                break;
            }
        }
        return s;
    }
};