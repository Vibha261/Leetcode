class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n= nums.size();
        vector<int> leftsum(n);
        int left=0;
        vector<int> rightsum(n);
        int right=0;
        vector<int> ans(n);
        for(int i=0; i<n;i++){
            leftsum[i]=left;
            left+=nums[i];
        }
        for(int i=n-1; i>=0;i--){
            rightsum[i]=right;
            right+=nums[i];
        }
        for(int i=0; i<n;i++){
            int diff= abs(leftsum[i]-rightsum[i]);
            ans[i]=diff;
        }
        return ans;
    }
};