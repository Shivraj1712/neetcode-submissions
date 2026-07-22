class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0 ;
        int i = a.size() - 1, j =b.size() - 1;
        while(i >= 0 || j >= 0 || carry != 0){
            int x = (i >= 0) ? a[i--] - '0' : 0 ;
            int y = (j >= 0) ? b[j--] - '0' : 0 ;
            int digit = x + y + carry ; 
            ans += to_string(digit % 2);
            carry = digit / 2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};