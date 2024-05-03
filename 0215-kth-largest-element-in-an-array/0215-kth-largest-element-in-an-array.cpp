class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> arr;
        for(int i=0;i<nums.size();i++)
        {
            arr.push(nums[i]);
        }
        int m=0;
        for(int i=1;i<=k;i++)
        {
            m=arr.top();
            arr.pop();
        }
        return m;
    }
};