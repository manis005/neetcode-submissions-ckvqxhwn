class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            vector<int> frequency(26);
            for (char c : s) {
                frequency[c - 'a']++;
            }
            string key = "";
            for (int count : frequency) {
                key += (count + 'a');
            }
            mp[key].push_back(s);
        }

        vector<vector<string>> res;
        for (auto element : mp) {
            res.push_back(element.second);
        }

        return res;
    }
};
