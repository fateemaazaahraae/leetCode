class Solution {
public:
    int mySqrt(int x) {
        int i;

        if (x == 1 || x == 0)
            return (x);
        for (i = 0; i <= x; i++)
        {
            if ((long)i * i == x)
                return (i);
            if ((long)i * i > x)
                return (i - 1);
        }
        return -1;
    }
};