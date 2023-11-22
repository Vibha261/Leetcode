class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        unordered_map<int, vector<int>> store;
        int maxKey = 0;

        for (int i = 0; i < nums.size(); ++i)
          for (int j = 0; j < nums[i].size(); ++j) {
            const int key = i + j;
            store[key].push_back(nums[i][j]);
            maxKey = max(maxKey, key);
          }

        for (int i = 0; i <= maxKey; ++i)
          for (auto j = store[i].rbegin(); j != store[i].rend(); ++j)
            ans.push_back(*j);

        return ans;
    }
};