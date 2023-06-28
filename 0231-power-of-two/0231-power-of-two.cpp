class Solution {
public:
    bool isPowerOfTwo(int n) {
        long ne =n;
        if(ne==0){
            return false;
        }
        if(ne==1){
            return true;
        }
        if((ne&(ne-1))==0){
            return true;
        }
        return false;
        
    }
};