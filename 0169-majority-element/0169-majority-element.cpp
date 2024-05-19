class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int majority=0;
        
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                majority=nums[i];
            }
            if(majority==nums[i])
            {
                count++;
            }
            else{
                count--;
            }
        }
        return majority;
    }
};