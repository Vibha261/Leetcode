class Solution {
public:
    string frequencySort(string s) {
        map<char, int> store;
        vector<pair<char, int>> st;
        int n=s.size();
        string ans="";
        for(auto c: s)
        {
            store[c]++;
        }
        for(auto c: store)
        {
            // cout<<c.first<<"->"<<c.second<<endl;
            st.push_back(c);
        }
        sort(st.begin(),st.end(), [&](pair<char,int> &a, pair<char,int> &b)
             {
                 return a.second>b.second;
             });
        for(auto c: st)
        {
            while(c.second)
            {
                ans+=c.first;
                c.second--;
            }
        }
        return ans;
    }
};