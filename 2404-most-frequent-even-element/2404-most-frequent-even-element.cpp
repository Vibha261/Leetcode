class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map <int, int> store;
        int n=nums.size();
        int answer = INT_MAX;
        for(int i=0; i<n; i++)
        {
            store[nums[i]]++;
        }
        int maxi=0;
        for(auto c: store)
        {
            if(c.first%2==0)
            {
                maxi = max(maxi, c.second); 
            }
        }
        for(auto c: store)
        {
            if(c.first%2==0)
            {
                if(c.second == maxi)
                {
                    answer = min(answer, c.first);
                }
            }
        }
        if(answer==INT_MAX)
        {
            return -1;
        }
        return answer;
    }
};