class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        vector<int> ans;
        int start=0;
        int end=n;
        for(auto& ch: s)
        {
            int value = (ch=='I')? start++:end--;
            cout<<value<<"  ";
            ans.push_back(value);
        }
        ans.push_back(end);
        return ans;
        
        // if(s[0]=='I')
        // {
        //     ans.push_back(0);
        // }
        // else{
        //     ans.push_back(len);
        // }
        // for(int i=0; i<n; i++)
        // {
        //     if(s[i]=='I')
        //     {
        //         ans.push_back(len--);
        //         // len--;
        //     }
        //     if(s[i]=='D')
        //     {
        //         ans.push_back()
        //     }
        // }
    }
};