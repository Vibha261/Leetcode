class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> check(256, 0);
        for(auto& ch: s)
        {
            check[ch]++;
        }
        for(auto& ch: t)
        {
            check[ch]--;
        }
        for(auto ch: check)
        {
            if(ch!=0)
            {
                return false;
            }
        }
        return true;
    }
};