class Solution {
public:
    char repeatedCharacter(string s) {
        map<char, int> store;
        char c;
        for(int i=0; i<s.length(); i++)
        {
            store[s[i]]++;
            if(store[s[i]]==2)
            {
                c=s[i];
                break;
            }
        }
        return c;
    }
};