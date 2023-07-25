class Solution {
public:
    int singleNumber(vector<int>& nums) {
//         int i;
//         for(auto it: nums){
//             i=count(nums.begin(),nums.end(),it);
//             if(i==1){
//                 i=it;
//                 break;
//             }
            
//         }
//         return i;
        int xorsum=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            xorsum = xorsum^nums[i];
        }
        return xorsum;
    }
};