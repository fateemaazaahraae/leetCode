bool isPalindrome(int x) {
    int copyX;
    long int isPali;
    int digit;

    copyX = x;
    isPali = 0;
    if (x < 0)
        return (false);
    while (copyX != 0)
    {
        digit = copyX % 10;
        if (((isPali * 10) + digit) > INT_MAX)
            return (false);
        isPali = (isPali * 10) + digit;
        copyX /= 10;
    }
    if (isPali == x)
        return (true);
    return (false);
}