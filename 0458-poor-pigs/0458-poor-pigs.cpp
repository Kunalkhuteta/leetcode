class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        const int x=minutesToTest/minutesToDie+1;
        int ans=0;
        for(int i=1;i<buckets;i*=x)
            ++ans;
        return ans;
    }
};