class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> check;
        vector<int> ans;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            check[nums[i]]++;
        }
        for(auto c: check)
        {
            if(c.second==1)
            {
                ans.push_back(c.first);
            }
        }
        return ans;
    }
};