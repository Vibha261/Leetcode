class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        map<string, int> mp = {{"type", 0},
                               {"color",1},
                               {"name",2}};
        int index=0;
        int count=0;
        for(auto c: mp)
        {
            if(c.first==ruleKey)
            {
                index=c.second;
            }
        }
        for(int i=0; i<items.size();i++)
        {
            if(items[i][index]==ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};