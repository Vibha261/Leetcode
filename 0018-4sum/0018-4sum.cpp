class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        int n= nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-3; i++)
        {
            // if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target)
            //     break;
            for(int j=i+1; j<n-2; j++)
            {
                int left = j+1;
                int right = n-1;
                while(left<right)
                {
                    int64_t sum=static_cast<int64_t>(nums[i])+nums[j]+nums[left]+nums[right];
                    if(sum==target)
                    {
                        ans.insert({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                    }
                    else if(sum<target)
                    {
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        vector<vector<int>> fnl(ans.begin(), ans.end());
        return fnl;
    }
};