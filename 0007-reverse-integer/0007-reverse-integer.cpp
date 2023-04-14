class Solution {
public:
    int reverse(int x) {
        long int rev=0;
        int last = 0;
        if(x<0){
            while(x<0){
                last = x%10;
                rev = (rev*10)+last;
                if(rev>INT_MAX) return 0;
                if(rev<INT_MIN) return 0;
                 x=x/10;
            }
        }
        else{
        while(x>0){
            last = x%10;
            rev= (rev*10)+last;
            if(rev>INT_MAX) return 0;
            if(rev<INT_MIN) return 0;
            x=x/10;
        }}
        return (int)rev;
    }
};