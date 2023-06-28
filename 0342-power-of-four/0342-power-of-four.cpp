class Solution {
public:
    bool isPowerOfFour(long n) {
        if(n==0)
            return false;
        if(n==1)
            return true;
        if(((n&(n-1))==0)&&(n%3==1))
            return true;
        return false;   
    }
};