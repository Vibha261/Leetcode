class Solution {
public:
    string reverseWords(string s) {
        stack<string> store;
        stack<string> reverse;
        string form="";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==' ')
            {
                store.push(form);
                form="";
            }
            else
            {
                form+=s[i];
            } 
        }
        store.push(form);
        while(!store.empty())
        {
            string ch = store.top();
            string fnl = rev(ch);
            cout<<fnl<<endl;
            reverse.push(fnl);
            store.pop();
        }
        string ans="";
        while(!reverse.empty())
        {
            string c=reverse.top();
            ans+=c;
            ans+=" ";
            reverse.pop();
        }
        ans.pop_back();
        return ans;
    }
    string rev(string ch)
    {
        string c="";
        for(int i=ch.length()-1; i>=0; i--)
        {
            c+=ch[i];
        }
        return c;
    }
};