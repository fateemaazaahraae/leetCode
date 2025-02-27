class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        if (s.empty())
            return (-1);
        int i = s.length() - 1;
        while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
            i--;
        while (i >= 0 && s[i] != ' ' && s[i] != '\t')
        {
            count++;
            i--;
        }
        return count;
    }
};