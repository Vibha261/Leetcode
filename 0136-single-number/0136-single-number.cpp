class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i;
        for(auto it: nums){
            i=count(nums.begin(),nums.end(),it);
            if(i==1){
                i=it;
                break;
            }
            
        }
        return i;
        
    }
};