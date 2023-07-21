class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
            {
                continue;
            }
            else
            {
                int sub=nums[i];
                for(int j=i; j<n; j++)
                {
                    nums[j]-=sub;
                }
                count++;
            }
        }
        return count;
    }
};