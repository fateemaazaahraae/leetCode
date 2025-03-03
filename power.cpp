class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0;
        if (x == 1.0)
            return (1.0);
        if (n < 0)
        {
            n = n * (-1);
            x = 1/x;
        }
        while (n)
        {
            result = result * x;
            n--;
        }
        return result;
    }
};