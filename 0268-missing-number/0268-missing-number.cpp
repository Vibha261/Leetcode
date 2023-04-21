class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s;
        map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(int i=0; i<=nums.size(); i++){
            if(mpp[i]==0){
                s=i;
            }
        }
        return s;
        
    }
};