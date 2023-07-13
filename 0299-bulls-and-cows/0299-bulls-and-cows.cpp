class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0;
        int cows=0;
        string ans="";
        vector<int> bulls_digit(10,0);
        vector<int> cows_digit(10,0);
        for(int i=0; i<secret.size(); i++)
        {
            if(secret[i]==guess[i])
            {
                bulls++;
            }
            else
            {
                int ch = int(guess[i]-'0');
                bulls_digit[ch]+=1;
                int ch1 = int(secret[i]-'0');
                cows_digit[ch1]+=1;
            }
        }
        for(int i=0; i<10; i++)
        {
            cows+=min(bulls_digit[i],cows_digit[i]);
        }
        ans+=to_string(bulls)+"A"+to_string(cows)+"B";
        return ans;
    }
};