class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int> p(n);
        for(auto i=n-1; i>=0; i--){
            if(digits[i]!=9){
                digits[i]+=1;
                return digits;
            }
            else{
                digits[i]=0;
            }
        } 
        p.insert(p.begin(),1);
        return p;
    }
};