class Solution {
public:
    int romanToInt(string s) {
        int i;
        int result;
        std::map<char, int> romanMap;

        i = 0;
        result = 0;
        romanMap['I'] = 1;
        romanMap['V'] = 5;
        romanMap['X'] = 10;
        romanMap['L'] = 50;
        romanMap['C'] = 100;
        romanMap['D'] = 500;
        romanMap['M'] = 1000;
        while (s[i])
        {
            if (romanMap[s[i]] < romanMap[s[i + 1]])
                result -= romanMap[s[i]];
            else
                result += romanMap[s[i]];
            i++;
        }
        return (result);
    }
};