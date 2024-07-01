class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ans = 0;
        for (int i = 1;i+1<arr.size(); i++) {
           if(arr[i-1]%2==1&&arr[i]%2==1&&arr[i+1]%2==1)
            return 1;
        }

        return 0;
    }
};