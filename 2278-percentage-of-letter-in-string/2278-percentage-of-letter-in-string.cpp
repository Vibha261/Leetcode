class Solution {
public:
    int percentageLetter(string s, char letter) {
        map<char,int> st;
        int n=s.size();
        // cout<<n<<endl;
        for(auto &c: s)
        {
            st[c]++;
        }
        int ans=0;
        for(auto c: st)
        {
            // cout<<c.first<<"->"<<c.second<<endl;
            if(c.first == letter)
            {
                // cout<<c.first<<endl;
                int val = c.second;
                // cout<<val<<endl;
                ans = (val*100)/n;
                // cout<<ans<<endl;
            }
        }
        return ans;
    }
};