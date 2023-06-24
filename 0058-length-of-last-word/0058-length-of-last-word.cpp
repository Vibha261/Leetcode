class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        if(n==0) 
            return 0;
        int st=0,e=n-1;
        while(st< n && s[st]==' ') 
            st++; 
        while(e >=0 && s[e]==' ') 
            e--;         
        
        if(st>e) 
            return 0;
        
        int i=e;
        while(i>=st)
        {
            if(s[i]==' ') 
                return e-i;
            else i--;
        }
        int ans=e-i;
        
        return ans;
    }
};