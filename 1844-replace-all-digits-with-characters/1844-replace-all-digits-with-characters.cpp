class Solution {
public:
    string replaceDigits(string s) {
        string ans="";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                ans+=s[i];
            }
            else
            {
                int ch = int(s[i-1]);
                int add = ch+int(s[i]-'0');
                // cout<<ch<<endl<<add<<endl;
                ans+=add;
            }
        }
        return ans;
    }
};