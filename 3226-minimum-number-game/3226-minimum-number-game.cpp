class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> mini(nums.begin(), nums.end());
        vector<int> res;
        while(!mini.empty())
        {
            int a=mini.top();
            mini.pop();
            int b=mini.top();
            mini.pop();

            res.push_back(b);
            res.push_back(a);
        }
        return res;
    }
};