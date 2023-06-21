class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxW = 0;
        vector<int> wealth;
        for(auto i=0; i<accounts.size(); i++){
            for(auto j=0; j<accounts[i].size(); j++){
                maxW+=accounts[i][j];
            }
            wealth.push_back(maxW);
            maxW=0;
        }
        int ans = *max_element(wealth.begin(),wealth.end());
        return ans;
        
    }
};