class Solution {
public:
    int subsetXORSum(vector<int>& nums) 
    {
        int n= nums.size();
        return accumulate(nums.begin(), nums.end(), 0, bit_or<>())
           << n-1;
    }
};