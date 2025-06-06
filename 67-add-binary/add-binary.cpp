class Solution {
public:
   
        string addBinary(string a, string b) {
    string result = "";
    int i = a.length() - 1, j = b.length() - 1, carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
       
        if (i >= 0) 
        sum += (a[i--] == '1' ? 1 : 0);
        if (j >= 0) 
        sum += (b[j--] == '1' ? 1 : 0);


        carry = sum / 2;
        char bit = (sum % 2 == 1) ? '1' : '0';
result.push_back(bit);
// Append current bit
    }

    reverse(result.begin(), result.end());  // Reverse the result string
    return result;
}
    
};