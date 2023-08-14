class Solution {
public:
    int sumBase(int n, int k) {
        int res=0;
        int pos=1;
        while(n>0)
        {
            res = res+(pos*(n%k));
            n=n/k;
            pos = pos*10;
        }
        int answer=0;
        while(res>0)
        {
            int lastdigit = res%10;
            answer+=lastdigit;
            res=res/10;
        }
        return answer;
        
    }
};