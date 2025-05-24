class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2)return true;
        int i =0;
        int j = s1.length() - 1;
        while (s1[i]==s2[i])i++;
        while(s1[j]==s2[j])j--;
        swap(s1[i],s1[j]);
        return s1 == s2;
    }
};