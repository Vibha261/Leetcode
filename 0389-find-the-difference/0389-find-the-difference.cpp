class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        cout<<s;
        sort(t.begin(),t.end());
        char ans;
        int i;
        for(i=0; i<s.length(); i++)
        {
            if(s[i]!=t[i])
            {
                ans = t[i];
                break;
            }
        }
        if(i==s.length())
        {
            ans=t[i];
        }
        return ans;
        // map<char,int> store;
        // char ans;
        // for(int i=0; i<s.length(); i++)
        // {
        //     store.push_back(s[i]);
        // }
        // for(int i=0; i<t.length();i++)
        // {
        //     if(find(s.begin(),s.end(),t[i])==s.end())
        //     {
        //         ans = t[i];
        //         break;
        //     }
        // }
        // return ans;
    }
};