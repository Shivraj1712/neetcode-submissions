class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0 ;
        int N = (int) n;
        while(N != 0){
            int bit = N % 2 ;
            if(bit == 1) count++;
            N /= 2;
        }
        return count;
    }
};
