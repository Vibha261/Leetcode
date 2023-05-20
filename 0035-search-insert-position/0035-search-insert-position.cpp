class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n;
        for(auto i=0; i<nums.size(); i++){
            if(nums[i]>=target){
                n=i;
                break;
            }
            else{
                n=nums.size();
            }
        }
        return n;
        
    }
};