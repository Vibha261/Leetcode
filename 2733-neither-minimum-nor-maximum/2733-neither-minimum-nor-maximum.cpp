class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) 
    {
        int n = nums.size();
        if(n==0||n==1||n==2)
        {
            return -1;
        }
        sort(nums.begin(), nums.end());
        int mini = nums[0];
        int maxi = nums[n-1];
        if(nums[1]==maxi)
        {
            return -1;
        }
        return nums[1];
    }
};