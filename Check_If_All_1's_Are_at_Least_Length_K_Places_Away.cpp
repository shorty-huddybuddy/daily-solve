class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i = 0;
        while (i < nums.size() && nums[i] != 1) {
            i++;
        }
        int prev = i;
        i++;
        while (i < nums.size()) {
            if (nums[i] == 1) {
                if (i - prev - 1 < k) {
                    return false;
                } else {
                    prev = i;
                }
            }
            i++;
        }
        return true;
    }
};