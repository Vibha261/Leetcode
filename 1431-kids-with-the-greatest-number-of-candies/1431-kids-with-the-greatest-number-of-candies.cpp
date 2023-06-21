class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int target = *max_element(candies.begin(),candies.end());
        for(auto i=0;i<candies.size(); i++){
            int check = candies[i]+extraCandies;
            if(check>=target)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};