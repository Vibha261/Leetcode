class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> store;
        vector<int> v;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            store[nums[i]]++;
        }
        for(auto c: store)
        {
            if(c.second>n/3)
            {
                v.push_back(c.first);
            }
        }
        return v;
    }
};