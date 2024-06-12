class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int i = 0;
        vector<int> v;
        sort(nums.begin(), nums.end());
        while (i < size(nums) - 1) {
            if (nums[i] == nums[i + 1])
                i += 2;
            else {
                v.push_back(nums[i]);
                i++;
            }
        }
        if (i == size(nums) - 1)
            v.push_back(nums[i]);
        return v;
    }
};