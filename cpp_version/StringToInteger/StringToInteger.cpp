class Solution {
public:
    int myAtoi(std::string s) {
    long long num;
    int sign;
    int digit;
    int i;

    num = 0;
    i = 0;
    sign = 1;
    while (s[i] == ' ' || s[i] == '\t')
        i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        digit = s[i] - '0';
        if (num > (LLONG_MAX - digit) / 10) {
                return sign == 1 ? 2147483647 : -2147483648;
            }
        num = num * 10 + digit;
        i++;
    }
    num = num * sign;
    if (num > 2147483647)
        num = 2147483647;
    else if (num < -2147483648)
        num = -2147483648;
    return (int)num;
    }
};