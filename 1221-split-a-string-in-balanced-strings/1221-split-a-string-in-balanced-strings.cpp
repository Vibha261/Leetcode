class Solution {
public:
    int balancedStringSplit(string s) {
        vector<string> vec;
        int count_R=0;
        int count_L=0;
        string check="";
        for(auto& ch: s)
        {
            if(ch=='R')
            {
                count_R++;
                check+=ch;
            }
            if(ch=='L')
            {
                count_L++;
                check+=ch;
            }
            if(count_L==count_R)
            {
                vec.push_back(check);
                check="";
                count_L=0;
                count_R=0;
            }
        }
        int ans= vec.size();
        return ans;
    }
};