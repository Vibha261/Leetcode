class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> re;
        re.push_back(nums[0]);
            for(int j=1; j<nums.size(); j++){
                nums[0]+=nums[j];
                re.push_back(nums[0]);
            }
        return re;
    }
};