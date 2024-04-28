class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int> , greater<int> >s;
        int i=0;
        vector<int> ans;
        while(i<nums.size())
        {
            s.push(nums[i]);
            i++;
        }
        int j=0;
        while(j<nums.size())
        {
            ans.push_back(s.top());
            s.pop();
            j++;
        }
        return ans;
    }

};