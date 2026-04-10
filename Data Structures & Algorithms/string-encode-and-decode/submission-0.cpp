class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for (string s : strs) {
            for (char c : s) {
                res += "/";
                res += c;
            }
            res += "#";
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string w = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '/') {
                w += s[i + 1];
                i++;
            } else if (s[i] == '#') {
                res.push_back(w);
                w = "";
            }
        }
        return res;
    }
};
