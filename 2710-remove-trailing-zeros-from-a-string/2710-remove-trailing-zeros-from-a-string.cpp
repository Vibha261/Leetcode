class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length();
        int count=0;
        for(int i=n-1; i>=0; i--)
        {
            if(num[i]=='0')
            {
                count++;
                // cout<<count<<endl;
            }
            else
            {
                break;
            }
        }
        string ans = num.substr(0, n-count);
        return ans;
    }
};