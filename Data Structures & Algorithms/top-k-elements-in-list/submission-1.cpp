class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        priority_queue<pair<int, int>> pq;
        vector<int> res;
        for (auto &p : freq) {
            pq.push({p.second, p.first});
            if (pq.size() > freq.size() - k) {
                res.push_back(pq.top().second);
                pq.pop();
            }
        }

        return res;
    }
};
