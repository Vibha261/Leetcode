class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char, int> store;
        for(auto c: sentence)
        {
            store[c]++;
        }
        string check = "abcdefghijklmnopqrstuvwxyz";
        int i=0;
        for(auto c: store)
        {
            cout<<c.first<<"->"<<c.second<<endl;
            if(c.first!=check[i])
            {
                return false;
            }
            i++;
        }
        return store.size()==26;
    }
};