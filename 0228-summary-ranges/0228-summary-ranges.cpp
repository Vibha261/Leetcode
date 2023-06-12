class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> r;
        int i=0,n=nums.size();
        while(i<n)
        {
            int s,l;
            s=nums[i];            
            while(i+1<n && nums[i+1]==nums[i]+1) 
                i++;
            l=nums[i];
            if(s==l)
                r.push_back(to_string(s));
            else
                r.push_back(to_string(s) + "->" + to_string(l));
            i++;
        }
        return r;   
    }
};