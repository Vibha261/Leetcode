class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            int val = nums[i];
            int reverse=0;
            while(val)
            {
                int lastdigit=val%10;
                reverse = reverse*10+lastdigit;
                val=val/10;
            }
            nums.push_back(reverse);
        }
        set<int> store;
        for(int i=0; i<nums.size(); i++)
        {
            store.insert(nums[i]);
        }
        return store.size();
    }
};