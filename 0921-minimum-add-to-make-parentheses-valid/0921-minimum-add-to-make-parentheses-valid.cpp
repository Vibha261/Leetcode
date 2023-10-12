class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> store;
        int moves=0;
        for(auto& c: s)
        {
            if(c=='(')
            {
                store.push(c);
            }
            else
            {
                if(!store.empty())
                {
                    store.pop();
                }
                else
                {
                    moves++;
                }
            }
        }
        while(!store.empty())
        {
            moves++;
            store.pop();
        }
        return moves;
    }
};