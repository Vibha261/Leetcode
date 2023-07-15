class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        // int j=1;
        // int k=n-1;
        // for(int i=0; i<n;i++)
        // {
        //     int temp = nums[i];
        //     while(j<k)
        //     {
        //         if(temp>nums[j])
        //         {
        //             j++;
        //         }
        //         if(temp>nums[k])
        //         {
        //             k--;
        //         }
        //         else if(temp<nums[j] && temp<nums[k])
        //         {
        //             return true;
        //         }
        //     }
        // }
        // return false;
        int min_First = INT_MAX;
        int min_Second = INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(nums[i]<=min_First)
                min_First=nums[i];
            else if(nums[i]<=min_Second)
                min_Second=nums[i];
            else
                return true;
        }
        return false;
    }
};