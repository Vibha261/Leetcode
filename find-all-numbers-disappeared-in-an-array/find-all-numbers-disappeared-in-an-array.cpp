class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> has(n+1);
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            has[nums[i]]++;
        }
        for(int i=1; i<n+1; i++)
        {
            if(has[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};