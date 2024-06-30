class Solution {
public:
    int maxScore(vector<int>& nums) {
        ranges::sort(nums, greater<>());
        long prefix=0;

        for(int i=0;i<nums.size();i++)
        {
            prefix+=nums[i];
            if(prefix<=0)    
            {
                return i;
            }
        }
        return nums.size();
    }
};