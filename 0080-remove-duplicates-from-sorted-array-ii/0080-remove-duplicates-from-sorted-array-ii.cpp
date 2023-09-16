class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> store;
        vector<int> uni;
        for(int i=0; i<nums.size(); i++)
        {
            store[nums[i]]++;
        }
        for(auto c: store)
        {
            cout<<c.first<<"->"<<c.second<<endl;
            if(c.second==1)
            {
                uni.push_back(c.first);
            }
            else if(c.second>=2)
            {
                uni.push_back(c.first);
                uni.push_back(c.first);
            }
        }
        nums=uni;
        return uni.size();
    }
};