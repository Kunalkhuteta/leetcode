class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        while(n)//if non-Zero then loop will excecute
        {
            n/=5;
            ans+=n;
        }
        return ans;
    }
};