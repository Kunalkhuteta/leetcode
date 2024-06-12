class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        int a=-1;
        ranges::sort(nums);
        for(int i=0;i<n;i++)
        {
            if(i==0 && nums[i]!=nums[i+1])
            {
                a=nums[i];
            }
            else if(i>0 && i<n-1 && nums[i]!=nums[i+1]&&nums[i]!=nums[i-1])
            {
                if(a==-1)
                {
                    a=nums[i];
                }
                else{
                    return {a, nums[i]};
                }
            }
            else if(i==nums.size()-1)
            {
                return {a, nums[i]};
            }
        }
        return {};
    }
};