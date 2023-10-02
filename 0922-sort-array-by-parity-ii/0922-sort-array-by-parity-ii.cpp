class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector<int> store;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        int l=0, r=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0)
            {
                store.push_back(even[l++]);
            }
            else
            {
                store.push_back(odd[r++]);
            }
        }
        return store;
    }
};