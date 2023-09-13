class Solution {
public:
    int gcd(int a, int b)
    {
        if(a==0)
        {
            return b;
        }
        if(b==0)
        {
            return a;
        }
        if(a==b)
        {
            return a;
        }
        if(a>b)
        {
            return gcd(a-b, b);
        }
        return gcd(a, b-a);
    }
    int findGCD(vector<int>& nums) {
        int a = *min_element(nums.begin(), nums.end());
        int b = *max_element(nums.begin(), nums.end());
        int gcdvalue = gcd(a,b);
        return gcdvalue;
    }
};