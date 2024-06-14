class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans=0;
        ranges::sort(nums);
        int nxtval=nums[0]+1;
        
        for(int i=1;i<nums.size();i++)
        {
           if(nxtval>=nums[i])           
            ans+=(nxtval++ - nums[i]);

           else
            nxtval=nums[i]+1;
        }
        return ans;
    }
};