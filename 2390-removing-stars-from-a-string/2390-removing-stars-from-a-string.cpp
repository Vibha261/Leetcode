class Solution {
public:
    string removeStars(string s) {
        stack<char> store;
        stack<char> reverse;
        string ans="";
        for(auto c: s)
        {
            if(c=='*')
            {
                store.pop();
            }
            else
            {
                store.push(c);
            }
        }
        while(!store.empty())
        {
            reverse.push(store.top());
            store.pop();
        }
        while(!reverse.empty())
        {
            ans+=reverse.top();
            reverse.pop();
        }
        return ans;
    }
};