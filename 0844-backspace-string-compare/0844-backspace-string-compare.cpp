class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> first;
        stack<char> second;
        for(auto c: s)
        {
            if(c=='#')
            {
                if(first.empty())
                {
                    continue;
                }
                else
                    first.pop();
            }
            else
            {
                first.push(c);
            }
        }
        for(auto c: t)
        {
            if(c=='#')
            {
                if(second.empty())
                {
                    continue;
                }
                else
                    second.pop();
            }
            else
            {
                second.push(c);
            }
        }
        string ch1="",ch2="";
        while(!first.empty())
        {
            ch1+=first.top();
            first.pop();
        }
        while(!second.empty())
        {
            ch2+=second.top();
            second.pop();
        }
        return ch1==ch2;
    }
};