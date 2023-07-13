class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        vector<int> check;
        int sum=0;
        int rotate =0;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            rotate+=i*nums[i];
        }
        int n=nums.size();
        check.push_back(rotate);
        for(int i=1; i<nums.size(); i++)
        {
            rotate+=sum-(n*nums[n-i]);
            check.push_back(rotate);
        }
        return *max_element(check.begin(), check.end());
    }
};