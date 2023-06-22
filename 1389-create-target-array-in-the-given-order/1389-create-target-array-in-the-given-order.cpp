class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        for(int n=0; n<nums.size(); n++){
            int i=index[n];
            int nu = nums[n];
            ans.insert(ans.begin()+i, nu);
        }
        return ans;
    }
};