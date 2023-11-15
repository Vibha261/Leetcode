class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        map<int, int> store;
        for(int i=0; i<nums.size(); i++)
        {
            store[i]=__builtin_popcount(i);
        }
        int sum=0;
        for(auto c: store)
        {
            if(c.second==k)
            {
                sum+=nums[c.first];
            }
        }
        return sum;
    }
};