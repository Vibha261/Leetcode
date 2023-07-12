class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>> ans;
        vector<int> a;
        check(k, n, 1, ans, a);
        return ans;
    }
    
    void check(int k, int n, int start, vector<vector<int>>& ans, vector<int>a)
    {
        if(a.size()==k)
        {
            if(n==0)
            {
                ans.push_back(a);
            }
            return;
        }
        for(int i=start; i<=9; i++)
        {
            a.push_back(i);
            check(k, n-i, i+1, ans, a);
            a.pop_back();
        }
    }
};