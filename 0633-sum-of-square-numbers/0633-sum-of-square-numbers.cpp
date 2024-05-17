class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt(c);
        while (i <= j) {
            long sum = pow(i, 2) + pow(j, 2);
            if (sum == c)
                return true;
            else if (sum > c)
                j--;
            else
                i++;
        }
        return false;
    }
};