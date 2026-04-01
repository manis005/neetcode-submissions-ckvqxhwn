class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorElement, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                majorElement = nums[i];
                count++;
                continue;
            }

            if (majorElement == nums[i]) {
                count++;
            } else {
                count--;
            }
        }

        count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == majorElement) {
                count++;
            }
        }
        if (count > nums.size() / 2) {
            return majorElement;
        }

        return -1;
    }
};