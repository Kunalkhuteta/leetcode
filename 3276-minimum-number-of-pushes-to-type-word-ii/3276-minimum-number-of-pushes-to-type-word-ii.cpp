class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        vector<int> count(26);

        for(const char ch:word)
            ++count[ch-'a'];

        ranges::sort(count, greater<>());

        for(int i=0;i<26;i++)
        {
            ans+=count[i]*(i/8+1);
        }
        return ans;
    }
};