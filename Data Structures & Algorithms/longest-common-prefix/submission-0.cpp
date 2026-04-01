class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        for (string s : strs) {
            if (prefix.length() < s.length()) {
                prefix = s;
            }
        }

        for (string s : strs) {
            int i = 0;
            while(i < prefix.length()) {
                if (s[i] != prefix[i]) {
                    prefix = prefix.substr(0, i);
                    break;
                }
                i++;
            }
        }

        return prefix;
    }
};