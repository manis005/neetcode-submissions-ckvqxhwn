class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftProduct(n, 1);
        vector<int> rightProduct(n, 1);
        vector<int> res(n);
        for (int i = 1; i < n; i++) {
            leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
            rightProduct[n - i - 1] = rightProduct[n - i] * nums[n - i];
        }

        for (int i = 0; i < n; i++) {
            res[i] = leftProduct[i] * rightProduct[i];
        }

        return res;
    }
};

// 1 1 2 8
// 48 24 6 1
// 48 24 12 8

