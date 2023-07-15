class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        map<int, int> check;
        int ans;
        for(int i=0; i<n; i++)
        {
            check[nums[i]]++;
        }
        for(auto c: check)
        {
            if(c.second==1)
            {
                ans=c.first;
            }
        }
        return ans;
    }
};