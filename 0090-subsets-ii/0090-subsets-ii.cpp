class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<multiset<int>> st;
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0; i<(1<<n); i++)
        {
            multiset<int> a;
            for(int j=0; j<n; j++)
            {
                if(i&(1<<j))
                {
                    a.insert(nums[j]);
                }
            }
            st.insert(a);
        }
        for(auto c: st)
        {
            ans.push_back(vector<int> (c.begin(), c.end()));
        }
        
        return ans;
    }
};