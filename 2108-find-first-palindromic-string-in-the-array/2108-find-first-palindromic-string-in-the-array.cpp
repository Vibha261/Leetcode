class Solution {
public:
    bool ispalindrome(string ch)
    {
        int sz = ch.length();
        for(int i=0; i<sz/2; i++)
        {
            if(ch[i]!=ch[sz-1-i])
            {
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0; i<n; i++)
        {
            string check = words[i];
            if(ispalindrome(check))
            {
                return check;
            }
        }
        return "";
    }
};