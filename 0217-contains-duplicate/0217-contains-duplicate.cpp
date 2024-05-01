class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
    //     for(int i=0;i<nums.size();i++)
    // {   int e=nums[i];
    //     for(int j=i+1;j<nums.size();j++)
    //     {   if(nums[j]==e)
    //        return true;
    //     }
    // }
    //     return false;  
sort(nums.begin(), nums.end());
    if(nums.size()<=1)
    {
        return 0;
    }int i=0;
    int j=i+1;
    while(j<nums.size())
    {
        if(nums[i]==nums[j])
        {
            return 1;
        }
        else{
            i++;
            j=i+1;
        }
    }
    return 0;
    }
};