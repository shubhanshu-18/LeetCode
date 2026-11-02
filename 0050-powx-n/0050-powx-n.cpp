class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        bool neg = N < 0;

        if(neg) N = -N;

        double ans = 1.0;

        while(N > 0) {
            if(N % 2 == 1) {
                ans *= x;
            }

            x *= x;
            N /= 2;
        }

        return neg ? 1.0 / ans : ans;
    }
};