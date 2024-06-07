class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int y=nums[0];
        for(const int x : nums)
        {
            y=gcd(y, x);
        }
        return y==1;
    }
};