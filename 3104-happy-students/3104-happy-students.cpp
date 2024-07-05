class Solution {
public:
    int countWays(vector<int>& nums) {
        int ans=0;
        nums.push_back(-1);
        nums.push_back(INT_MAX);
        ranges::sort(nums);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<i&&i<nums[i+1])
                ++ans;
        }
        return ans;
    }
};