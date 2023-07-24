class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        set<int, greater<int>> st;
        for(int i=0; i<n; i++)
        {
            st.insert(nums[i]);
        }
        int check = st.size();
        if(check==1 || check==2)
        {
            for(auto i:st)
            {
                return i;
            }
        }
        int count=0;
        int ans;
        for(auto i: st)
        {
            count++;
            if(count==3)
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};