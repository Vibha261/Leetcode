class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int len=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                count++;
                len=max(len, count);
            }
            else
            {
                count=0;
            }
        }
        return len;
    }
};