class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=nums.size()-1;j>i;j--){
                rightsum+=nums[j];
            }
            for(int j=0;j<i;j++){
                leftsum+=nums[j];
            }
            if(leftsum==rightsum){
                return i;
            }
            else{
                leftsum=0;
                rightsum=0;
            }
        }
        return -1;
        
    }
};