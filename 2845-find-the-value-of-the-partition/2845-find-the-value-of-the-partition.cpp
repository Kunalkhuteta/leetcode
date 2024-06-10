class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
    int n=nums.size();
    int ans=INT_MAX;
   ranges::sort(nums);
        for(int i=1;i<n;i++)
        {
            ans=min(ans, nums[i]-nums[i-1]);
        }
        return ans;
    }
};