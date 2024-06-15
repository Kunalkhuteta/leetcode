class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        const int dresses =accumulate(machines.begin(), machines.end(), 0);
        // accumulate() is used to total all the element in the vector array
        if(dresses%machines.size()!=0)
            return -1;
        int ans=0;
        int i=0;
        const int avg=dresses/machines.size();
        for(const int dress : machines)
        {
            i+=dress-avg;
            ans=max({ans, abs(i), dress-avg});
            // abs() is used to return absolute value of number
        }
        return ans;
    }
};