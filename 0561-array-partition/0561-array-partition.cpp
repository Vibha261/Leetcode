class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i+=2)
        {
            int k = min(nums[i],nums[i+1]);
            ans+=k;
        }
        return ans;
    }
};