class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int result = nums[0]+nums[1]+nums[2];
        int ans = abs(result - target);
        for(int i=0; i<n-1; i++)
        {
                int l=i+1;
                int r=n-1;
                while(l<r)
                {
                    int sum = nums[i]+nums[l]+nums[r];
                    int diff = abs(sum-target);
                    if(diff<ans)
                    {
                        ans=diff;
                        result  = sum;
                    }
                    if(sum<target)
                    {
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
        }
        return result;
    }
};