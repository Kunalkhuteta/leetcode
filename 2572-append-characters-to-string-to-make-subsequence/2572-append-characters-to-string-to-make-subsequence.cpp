class Solution {
public:
    int appendCharacters(string s, string t) {
        int countS=0;
        int countT=0;
        int ans=0;
       while(countS<s.length())
        {
            if(s[countS]==t[countT])
            {
                countS++;
                countT++;
            }
            else if(s[countS]!=t[countT])
            {
                countS++;
            }
        }
        while(countT<t.length())
        {
            s.push_back(t[countT]);
            ans++;
            countT++;
        }
        return ans;
    }
};