class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string prefix;
        int         i;
        if (strs.empty())
            return "";
        prefix = strs[0];
        i = 1;
        while (i < strs.size())
        {
            while (strs[i].find(prefix) != 0)
            {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty())
                    return "";
            }
            i++;
        }
        return (prefix);
    }
};