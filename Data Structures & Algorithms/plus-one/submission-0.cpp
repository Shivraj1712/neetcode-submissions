class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1 ;
        int i = digits.size() - 1;
        while(i >= 0) {
            int digit = digits[i] + carry ;
            digits[i] = digit% 10 ;
            carry = digit / 10 ;
            i--;
        }
        if(carry != 0){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
