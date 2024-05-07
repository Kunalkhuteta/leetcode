class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        int i=0;
        while(num!=0)
        {
            if(num%2==0)
            {
                num/=2;
                count++;
                i++;
            }
            else if(num%2==1)
            {
                num-=1;
                count++;
                i++;
            }
        }
        return count;
    }
};