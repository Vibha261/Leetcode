class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(auto i=0; i<nums.size(); i++){
            int j=nums[i];
            ans.push_back(nums[j]);
        }
        return ans;
        
    }
};