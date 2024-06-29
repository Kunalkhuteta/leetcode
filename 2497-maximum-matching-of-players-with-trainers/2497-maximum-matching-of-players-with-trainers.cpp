class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        ranges::sort(players);
        ranges::sort(trainers);
        int ans=0;
        int i=0, j=0;
        // stack<int> stk;
        while(i<players.size()&&j<trainers.size())
        {
                if(players[i]<=trainers[j])
                {
                    ans++;
                    i++;
                    j++;
                }
                else{
                    j++;
                }
            
        }
        return ans;
    }
};