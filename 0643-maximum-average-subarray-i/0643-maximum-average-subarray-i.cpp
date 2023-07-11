class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans;
        int n=nums.size();
        double sum;
        for(int i=0; i<k; i++)
        {
            sum+=nums[i];
        }
        double maxi = sum;
        for(int i=k;i<n;i++)
        {
            sum+=nums[i]-nums[i-k];
            maxi=max(maxi, sum);
        }
        ans=maxi/k;
        return ans;
    }
};