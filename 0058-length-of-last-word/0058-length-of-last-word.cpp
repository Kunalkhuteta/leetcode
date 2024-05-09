class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int count=0;
        int j=n-1;
        while(s[j]==' ')
        {
            j--;
        }
        for(j;j>=0;j--)
        {
            if(s[j]!=' ')
            {
                count++;
            }
            else 
                break;
        }
        return count;
    }
};