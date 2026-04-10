class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for (string s : strs) {
            string encoded = to_string(s.length()) + "#" + s;
            res += encoded;
        }
        cout << res << endl;
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int len = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                continue;
            }
            res.push_back(s.substr(i + 1, len));
            i += len;
            len = 0;
        }
        return res;
    }
};
