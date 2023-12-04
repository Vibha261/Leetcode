class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int check = INT_MIN;
        for(int i=0; i<num.size()-2; i++)
        {
            if(num[i]==num[i+1]&&num[i+1]==num[i+2])
            {
                ans="";
                ans+=num[i];
                ans+=num[i];
                ans+=num[i];
                if(check<stoi(ans))
                {
                    check = stoi(ans);
                }
            }
        }
        if(check == INT_MIN)
        {
            return "";
        }
        string fnl = to_string(check);
        if(fnl.size()!=3)
        {
            fnl+=to_string(check);
            fnl+=to_string(check);
        }
        return fnl;
    }
};