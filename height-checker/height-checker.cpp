class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int match=0;
        vector<int> expected = heights;
        sort(expected.begin(),expected.end());
        for(int i=0; i<expected.size(); i++)
        {
            if(expected[i]!=heights[i])
            {
                match++;
            }
        }
        return match;
    }
};