class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> store;
        vector<int> ans;
        for(auto c: nums)
        {
            store[c]++;
        }
        vector<vector<int>> st;
        for(auto c: store)
        {
            st.push_back({c.first,c.second});
        }
        sort(st.begin(), st.end(), [&](vector<int> &a, vector<int> &b)
             {
                 return a[1]>b[1];
             });
        for(int i=0; i<k;i++)
        {
            cout<<st[i][0]<<"->"<<st[i][1]<<endl;
            ans.push_back(st[i][0]);
        }
        return ans;
    }
};