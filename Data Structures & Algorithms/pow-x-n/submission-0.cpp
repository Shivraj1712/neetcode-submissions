class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long N = n;
        if(n < 0){
            N = -n;
            x = 1/x;
        }
        while(N > 0){
            if(N % 2 != 0){
                ans *= x;
                N--;
            }
            x *= x;
            N /= 2;
        }
        return ans;
    }
};
