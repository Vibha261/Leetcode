class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> checker = nums;
        sort(checker.begin(), checker.end(), greater<int>());
        if(checker[0]>=(checker[1]*2))
        {
            for(int i=0;i<n;i++)
            {
                if(nums[i]==checker[0])
                {
                    return i;
                }
            }
        }
        return -1;
    }
};