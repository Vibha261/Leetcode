class Solution {
public:
    // bool cmp(map<int, int>& a, map<int, int>& b)
    // {
    //     return a.second<b.second;
    // }
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> check;
        for(int i=0; i<nums.size();i++)
        {
            check[nums[i]]++;
        }
        sort(nums.begin(), nums.end(),[&](int a, int b)
             {
                 if(check[a]==check[b])
                 {
                     return a>b;
                 }
                 return check[a]<check[b];
             });
        // for(auto c: check)
        // {
        //     cout<<c.first<<"->"<<c.second<<endl;
        // }
        return nums;
    }
};