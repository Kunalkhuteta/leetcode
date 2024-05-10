class Solution {
public:
    bool isUgly(int n) {
    //    if(n<=1) 
    //     {
    //         return 1;
    //     }
    //     int mul=1;

    //     while(mul<=n)
    //     {
    //         if(mul==n)
    //         {
    //             return 1;
    //             break;
    //         }
    //         if(n%2==0)
    //             mul*=2;

    //         if(n%3==0)    
    //             mul*=3;
            
    //         if(n%5==0)
    //             mul*=5;
            
    //     }
    //     return 0;
    while(n>1)
{if(n%2==0)
n=n/2;
else if(n%3==0)
n=n/3;
else if(n%5==0)
n=n/5;
else
break;
}
return n==1;
    }
};