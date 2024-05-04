class Solution {
public:
    int hammingDistance(int x, int y) {
        int i, j;
        int count = 0;

        while (x != 0 || y != 0) {

            i = x & 1;
            x >>= 1;

            j = y & 1;
            y >>= 1;

            if (i != j)
                count++;
        }

        return count;
    }
};