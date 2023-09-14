class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> store;
        for(int i=0; i<nums.size(); i++)
        {
            store[nums[i]]++;
        }
        int sum=0;
        for(auto c: store)
        {
            if(c.second==1)
            {
                sum+=c.first;
            }
        }
        return sum;
    }
};