class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        int l=0, r=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0)
            {
                ans.push_back(even[l++]);
            }
            else
            {
                ans.push_back(odd[r++]);
            }
        }
        return ans;
    }
};