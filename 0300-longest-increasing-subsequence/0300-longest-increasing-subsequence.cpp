class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.empty())
            return 0;
        vector<int> ans(nums.size(), 1);
        for (int i = 1; i < nums.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[j] < nums[i])
                    ans[i] = max(ans[i], ans[j] + 1);
            }
        }
        return ranges::max(ans);
    }
};