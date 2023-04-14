class Solution {
public:
    bool isPalindrome(int x) {
        long num = x;
        long rev=0;
        long last;
        while(x>0){
            last=x%10;
            rev=(rev*10)+last;
            x=x/10;
        }
        if(num==rev){
            return true;
        }
        else{
            return false;
        }
    }
};