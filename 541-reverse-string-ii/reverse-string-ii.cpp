class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
     for (int start = 0; start < n; start += 2 * k) {
       int end = min(start + k - 1, n - 1);
      int i = start, j = end;
            while (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        
        return s;

    }
};