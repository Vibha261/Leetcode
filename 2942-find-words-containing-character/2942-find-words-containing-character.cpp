class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> sol;
        for(int i=0; i<words.size(); i++)
        {
            string s = words[i];
            for(auto c: s)
            {
                if(c==x)
                {
                    sol.push_back(i);
                    break;
                }
            }
        }
        return sol;
    }
};