class Solution {
public:
    int alternateDigitSum(int n) {
        string str = to_string(n);
        int sum=0;
        for(int i=0; i<str.length(); i++)
        {
            int digi = int(str[i]-'0');
            if(i%2==0)
            {
                sum+=digi;
            }
            else
            {
                sum-=digi;
            }
            // cout<<digi<<endl;
        }
        return sum;
    }
};