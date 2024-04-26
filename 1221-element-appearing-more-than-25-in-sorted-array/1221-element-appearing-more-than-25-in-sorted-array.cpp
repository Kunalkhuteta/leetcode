class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int min=arr.size()/4;
        int count=0;
        int ans;
        if(arr.size()==1)
        {
            return arr[0];
        }
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1]){
                count++;
                if(count>=min)
                {
                    ans=arr[i];
                    break;
                }
            }
            else {
                count=0;
            }
        
        }
        return ans;
    }
};