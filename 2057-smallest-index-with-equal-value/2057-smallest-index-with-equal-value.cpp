class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int value = INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%10 == nums[i])
            {
                if(i<value)
                {
                    value = i;
                }
            }
        }
        if(value == INT_MAX)
        {
            return -1;
        }
        return value;
    }
};