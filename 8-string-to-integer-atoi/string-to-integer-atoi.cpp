class Solution {
public:
    int myAtoi(string s) {
        int n = s.size(), i = 0;
        //leading spaces
        while(i < n && s[i] == ' ') i++;
        if(i == n) return 0;

        //sign
        int sign = 1;
        if(s[i] == '-') {
            sign = -1;
            i++;
        } else if(s[i] == '+') {
            i++;
        }

        long long num = 0;
        while(i < n && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            //overflow
            if(sign == 1 && num > INT_MAX) return INT_MAX;
            if(sign == -1 && -num < INT_MIN) return INT_MIN;
            i++;
        }

        return sign * num;
    }
};