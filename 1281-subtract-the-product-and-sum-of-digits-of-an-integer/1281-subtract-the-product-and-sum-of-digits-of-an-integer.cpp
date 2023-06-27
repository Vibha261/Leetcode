class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans=0;
        int prod = 1;
        int sum =0;
        while(n!=0){
            int d=n%10;
            prod*=d;
            sum+=d;
            n=n/10;
        }
        ans = prod - sum;
        return ans;
    }
};