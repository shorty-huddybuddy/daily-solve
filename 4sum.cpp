class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int l = 0; l < nums.size(); l++) {
                if (l > 0 && nums[l] == nums[l - 1])
                    continue;
            for (int i = l + 1; i < nums.size(); i++) {
                if (i > l+1 && nums[i] == nums[i - 1])
                    continue;

                int j = i + 1;
                int k = nums.size() - 1;

                while (j < k) {
                    long long total =(long long) nums[l] + nums[i] + nums[j] + nums[k];

                    if (total > target)
                        k--;
                    else if (total < target)
                        j++;
                    else {
                        ans.push_back({nums[l], nums[i], nums[j], nums[k]});
                        j++;

                        while (nums[j] == nums[j - 1] && j < k)
                            j++;
                    }
                }
            }
        }
        return ans;
    }
};