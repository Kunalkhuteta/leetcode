class Solution {
public:
    int addDigits(int num) {
     int sum=0;
     int s=num;
     int r=0;
     while(s>=10)   
     {
        sum=0;
        while(s!=0){
        r=s%10;
        sum+=r;
        s/=10;
        }
        s=sum;
     }
     return s;
    }
};