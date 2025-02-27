class Solution {
public:
    int strStr(string haystack, string needle) {
        int i;
        int j;

        i = 0;
        while (haystack[i])
        {
            if (haystack[i] == needle[0])
            {
                j = 0;
                while (needle[j] == haystack[i + j])
                {
                    if (needle[j + 1] == '\0')
                        return (i);
                    j++;
                }
            }
            i++;
        }
        return (-1);
    }
};