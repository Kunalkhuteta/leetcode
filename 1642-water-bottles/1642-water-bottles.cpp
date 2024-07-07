class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        int r=0;
        while(numBottles>=numExchange)
        {
            int bottles=numBottles/numExchange;
            r=numBottles%numExchange;
            sum+=bottles;
            numBottles=bottles+r;;
        }
        return sum;
    }
};