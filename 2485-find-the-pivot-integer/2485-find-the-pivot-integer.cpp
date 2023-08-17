class Solution {
public:
    int pivotInteger(int n) 
    {
        int val = (n*n + n)/2;
        int x =sqrt(val);
        if(x*x == val)
        {
            return x;
        }
        return -1;
    }
};