class Solution {
public:
    int mySqrt(int x) {
        int temp =x;
        int count=0;
        int i=1;
        while(temp>=0)
        {
            temp=temp-i;
            if(temp<0)
            {
                break;
            }
            count++;
            i++;
            i++;
        }
        return count;
    }
};