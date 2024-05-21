class Solution {
public:
    string reversePrefix(string word, char ch) {
        int chi=word.find(ch);
        if(chi==-1)
        {
            return word;
        }
        string result;
        for(int i=0;i<word.length();i++)
        {
            if(i<=chi)
            {
                result+=word[chi-i];
            }
            else{
                result+=word[i];
            }
        }
        return result; 
    }
};