class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int m=flowerbed.size();
    
    for(int i=0;i<m;i++)
    {
        int left=(i==0)?0:flowerbed[i-1];
        int right=(i==m-1)?0:flowerbed[i+1];
        if(left+right+flowerbed[i]==0)
        {
            flowerbed[i]=1;
            --n;
        }
    }
    return n<=0;
    }
};