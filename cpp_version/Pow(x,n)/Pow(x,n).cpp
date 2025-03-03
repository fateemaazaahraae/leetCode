class Solution {
public:
    double myPow(double x, int n) {
        long long num = n;
        if (num < 0) {
            x = 1 / x;
            num = -num;
        }

        double result = 1.0;
        while (num) {
            if (num % 2)
                result *= x;
            x *= x;
            num /= 2;
        }
        return result;
    }
};