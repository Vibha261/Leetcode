class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n;
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>nums.size()/2){
                n=nums[i];   
            }
        }
        return n;
    }
};