class Solution {
public:
    bool isPerfectSquare(int num) {
        int temp=num;
        int i=1;
        while(temp>=0)
        {
            temp=temp-i;
            if(temp==0){
                return true;
            }
            i+=2;
        }
        return false;
    }
};