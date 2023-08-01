class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
    int r = s.length() - 1;

    while (l < r) {
      while (l < r && !isalnum(s[l]))
        ++l;
      while (l < r && !isalnum(s[r]))
        --r;
      if (tolower(s[l]) != tolower(s[r]))
        return false;
      ++l;
      --r;
    }

    return true;
        // if(s.length()==1)
        // {
        //     return true;
        // }
        // string check="";
        // for(auto& c: s)
        // {
        //     if(c>='A' && c<='Z')
        //     {
        //         check+=(char)tolower(c);
        //     }
        //     else if(c>='a' && c<='z')
        //     {
        //         check+=c;
        //     }
        // }
        // if(check.length()==1 || check.length()==0)
        // {
        //     return false;
        // }
        // for(int i=0; i<check.length()/2; i++)
        // {
        //     if(check[i]!=check[check.length()-i-1])
        //     {
        //         return false;
        //     }
        // }
        // return true;
    }
};