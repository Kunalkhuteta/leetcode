class Solution {
public:
    int trap(vector<int>& height) {
       if(height.empty()) 
       {
        return 0;
       }

       int ans=0;
       int l=0;
       int r=height.size()-1;
       int maxl=height[l];
       int maxr=height[r];
       while(l<r)
       {
        if(maxl<maxr)
        {
            ans+=maxl-height[l];
            maxl=max(maxl, height[++l]);
        }
        else{
            ans+=maxr-height[r];
            maxr=max(maxr, height[--r]);
        }
       }
       return ans;
    }
};