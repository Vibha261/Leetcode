class Solution {
public:
    int maximum69Number (int num) {
        int temp = num;
        int ans=0;
        vector<int> n;
        while(temp)
        {
            int digit = temp%10;
            n.push_back(digit);
            temp/=10;
        }
        for(int i=n.size()-1; i>=0; i--)
        {
            if(n[i]==6)
            {
                n[i]=9;
                break;
            }
        }
        for(int i=n.size()-1; i>=0; i--)
        {
            ans= ans*10+n[i];
        }
        return ans;
    }
};