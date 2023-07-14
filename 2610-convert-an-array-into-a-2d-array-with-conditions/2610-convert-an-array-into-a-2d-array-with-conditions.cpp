class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int, int> check;
        vector<vector<int>> ans;
        vector<int> a;
        for(int i=0; i<nums.size(); i++)
        {
            check[nums[i]]++;
        }
        // for(int i=0; i<10; i++)
        // {
        //     cout<<check[i]<<endl;
        // }
        int maximum=0;
        for(auto& p: check)
        {
            maximum = max(maximum, p.second);
        }
        // cout<<n;
        for(int i=0; i<maximum; i++)
        {
            a.clear();
            for(auto& p: check)
            {
                if(p.second>0)
                {
                    a.push_back(p.first);
                    p.second--;
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};