class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        int carry = 0;
        string result = "";
        while(i>=0||j>=0||carry){
            int sum = carry;
            if(i>=0)
            sum = sum+(a[i--]=='1'?1:0);
             if(j>=0)
            sum = sum+(b[j--]=='1'?1:0);
            carry = sum/2;
            char bit = (sum%2==1)?'1':'0';
          result.push_back(bit);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};