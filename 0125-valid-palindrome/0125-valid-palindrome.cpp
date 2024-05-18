class Solution {
public:
    bool isPalindrome(string s) {
        int S=0;
        int e=s.length()-1;
        while(S<e)
        {
            while(S<e&&!isalnum(s[S]))
                ++S;
            while(S<e&&!isalnum(s[e]))
                --e;
            if(tolower(s[S])!=tolower(s[e]))
                return 0;
            ++S;
            --e;
        }
        return 1;
    }
};