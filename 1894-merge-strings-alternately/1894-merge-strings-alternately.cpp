class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        for (int i = 0; i < word1.length() || i < word2.length(); i++) {
            if (i<word1.size() && i<word2.size()) {
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
            }
            else if(i>word1.length()-1)
            {
             ans.push_back(word2[i]);
            }
            else if(i>word2.length()-1)
            {
                ans.push_back(word1[i]);
            }
        }
        return ans;
    }
};