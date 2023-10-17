class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> store;
        char from = s[0];
        char to = s[3];
        int f = int(s[1]-'0');
        int t = int(s[4]-'0');
        // cout<<from<<" "<<to<<" "<<f<<" "<<t<<endl;
        for(char c = from; c<=to; c++)
        {
            // cout<<c<<endl;
            for(int i=f; i<=t;i++)
            {
                string s = c+to_string(i);
                store.push_back(s);
            }
        }
        return store;
    }
};