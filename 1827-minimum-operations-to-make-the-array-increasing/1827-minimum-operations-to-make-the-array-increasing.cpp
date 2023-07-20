class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n-1; i++)
        {
            if(nums[i]<nums[i+1])
            {
                continue;
            }
            else
            {   
            // while(nums[i]>=nums[i+1])
            //     {
            //         cout<< nums[i+1]<<" ";
            //         nums[i+1]++;
            //         cout<<nums[i+1]<<endl;
            //         count++;
            //     }
                cout<<nums[i]<<" "<<nums[i+1]<<endl;
                count+=(nums[i]-nums[i+1])+1;
                nums[i+1]+=(nums[i]-nums[i+1])+1;
                cout<<nums[i]<<" "<<nums[i+1]<<endl;
                cout<<count<<endl;
            }
        }
        return count;
    }
};