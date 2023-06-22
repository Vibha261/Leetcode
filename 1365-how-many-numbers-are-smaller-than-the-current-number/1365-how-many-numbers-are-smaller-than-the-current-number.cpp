class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int target = nums[i];
            for(int j=0; j<n; j++){
                if(nums[j]<target)
                    c++;
            }
            ans.push_back(c);
            c=0;
        }
        return ans;
    }
};