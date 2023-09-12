class Solution {
public:
    string sortSentence(string s) {
        string result="";
        map<int,string> store;
        string str="";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                int j=s[i]-'\0';
                store[j] = str;
                // result+=str;
                str="";
            }
            else if(s[i]==' ')
            {
                continue;
            }
            else
            {
                str+=s[i];
            }
        }
        for(auto c: store)
        {
            // cout<<c.first<<"->"<<c.second<<endl;
            result+=c.second;
            result+=" ";
        }
        result.erase(result.end()-1);
        return result;
    }
};