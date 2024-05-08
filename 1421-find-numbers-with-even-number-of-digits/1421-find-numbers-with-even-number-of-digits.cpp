class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(auto i : nums)
        {
            string num=to_string(i);//to_string is built in func, which iterate every character
            if(num.size()%2==0)
            {
                count++;
            }
        }
        return count;
    }
};