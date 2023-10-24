class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int, greater<int>> store;
        for(int n:nums)
        {
            store.insert(n);
        }
        int count=0;
        int maxi=0;
        for(auto c: store)
        {
            count++;
            if(count==k)
            {
                maxi = c;
                break;
            }
        }
        return maxi;
    }
};