class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp = num;
        int reverse=0;
        int doubleReverse=0;
        while(num)
        {
            int lastDigit = num%10;
            reverse=reverse*10+lastDigit;
            num=num/10;
        }
        while(reverse)
        {
            int lastDigit = reverse%10;
            doubleReverse =  doubleReverse*10+lastDigit;
            reverse=reverse/10;
        }
        if(doubleReverse == temp)
        {
            return true;
        }
        return false;
    }
};