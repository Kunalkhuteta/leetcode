class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        long ans=0;
        long count0=0;
        long count1=0;
        for(const char c: text)
        {
            if(c==pattern[1])
            {
                ans+=count0;
                ++count1;
            }
            if(c==pattern[0])
            {
                ++count0;
            }
        }
        return ans+max(count0, count1);
    }
};