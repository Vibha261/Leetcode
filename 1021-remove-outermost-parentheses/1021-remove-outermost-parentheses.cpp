class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string> st;
        int depth=1;
        string check= " " ;
        string finalAnswer="";
        check+=s[0];
        for(int i=1; i<s.length(); i++)
        {
            if(s[i]=='(')
            {
                depth++;
                check+=s[i];
            }
            else if(s[i]==')')
            {
                depth--;
                check+=s[i];
            }
            if(depth==0)
            {
                st.push_back(check);
                check=" ";
            }
        }
        for(int i=0; i<st.size();i++)
        {
            int sizing = st[i].length();
            string str = st[i];
            finalAnswer+=str.substr(2,sizing-3);
            // cout<<" final "<<finalAnswer<<endl;
        }
        return finalAnswer;
    }
};