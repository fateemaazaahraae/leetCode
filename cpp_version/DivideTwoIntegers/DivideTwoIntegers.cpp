class Solution {
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long ldividend = llabs((long long)dividend);
        long long ldivisor = llabs((long long)divisor);
        long long result = 0;

        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

        while (ldividend >= ldivisor) {
            long long temp = ldivisor, multiple = 1;
            while (ldividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            ldividend -= temp;
            result += multiple;
        }

        return sign * result;
    }
};
