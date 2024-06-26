class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int s=0;
    
    int e=numbers.size()-1;
    
        while(numbers[s]+numbers[e]!=target) 
        {
            if(numbers[s]+numbers[e]<target)
            {
                s++;
            }
            else 
            {
                e--;
            }
            
        }
        return {s+1, e+1};
    }
};