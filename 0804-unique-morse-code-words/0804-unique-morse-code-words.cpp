class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char, string> check;
        int ans=0;
        check['a'] = ".-";
        check['b'] = "-...";
        check['c'] = "-.-.";
        check['d'] = "-..";
        check['e'] = ".";
        check['f'] = "..-.";
        check['g'] = "--.";
        check['h'] = "....";
        check['i'] = "..";
        check['j'] = ".---";
        check['k'] = "-.-";
        check['l'] = ".-..";
        check['m'] = "--";
        check['n'] = "-.";
        check['o'] = "---";
        check['p'] = ".--.";
        check['q'] = "--.-";
        check['r'] = ".-.";
        check['s'] = "...";
        check['t'] = "-";
        check['u'] = "..-";
        check['v'] = "...-";
        check['w'] = ".--";
        check['x'] = "-..-";
        check['y'] = "-.--";
        check['z'] = "--..";
        set<string> morse;
        for(int i=0; i<words.size(); i++)
        {
            string s1 = words[i];
            string ne ="";
            for(int j=0; j<s1.length(); j++)
            {
                char op=s1[j];
                ne+=check[op];
            }
            morse.insert(ne);
        }
        for(auto& c:morse)
        {
            // cout<<c<<endl;
            ans++;
        }
        return ans;
    }
};