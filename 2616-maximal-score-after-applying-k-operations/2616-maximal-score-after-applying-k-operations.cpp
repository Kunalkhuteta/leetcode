class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;
        long ans=0;
        for(const int num:nums)
        {
            maxHeap.push(num);
        }
        for(int i=0;i<k;i++)
        {
            int num=maxHeap.top();
            maxHeap.pop();
            ans+=num;
            maxHeap.push((num+2)/3);
        }
    return ans;
    }
};