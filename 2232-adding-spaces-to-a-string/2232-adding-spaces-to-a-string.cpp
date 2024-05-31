class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i=0;
        int j=0;
        int n=s.length();
        int m=spaces.size();
        string newstr;
        while(i<n)
        {
            if(j<m && i==spaces[j])
            {
                newstr.push_back(' ');
                j++;
            }
            newstr.push_back(s[i]);
            i++;
        }
        return newstr;
    }
};