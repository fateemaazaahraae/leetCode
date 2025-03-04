class Solution {
public:
    int reverse(int x) {
        long num;
        int sign;

        sign = 1;
        num = 0;
        if (x < 0 && x != -2147483648)
        {
            sign *= -1;
            x *= -1;
        }
        while (x)
        {
            num = (num * 10) + (x % 10);
            x /= 10;
        }
        if (num > 2147483647 || num < -2147483648)
            return 0;
        return (num * sign);
    }
};