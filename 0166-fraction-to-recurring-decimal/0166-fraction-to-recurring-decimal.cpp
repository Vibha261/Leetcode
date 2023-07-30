class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator==0)
        {
            return "0";
        }
        string res="";
        int sign = (numerator<0)^(denominator<0)?-1:1;
        if(sign==-1)
        {
            res+="-";
        }
        long long num = abs(static_cast<long long>(numerator));
        long long deno = abs(static_cast<long long>(denominator));
        long long value = num/deno;
        res+=to_string(value);
        long long remain = num%deno;
        
        if(remain==0)
        {
            return res;
        }
        res+=".";
        unordered_map<int, int> check;
        while(remain!=0)
        {
            if(check.find(remain)!=check.end())
            {
                res.insert(check[remain], "(");
                res+=")";
                break;
            }
            check[remain]=res.length();
            num = remain*10;
            long long value = num/deno;
            res+=to_string(value);
            remain = num%deno;
        }
        return res;
    }
};