class Solution {
public:
    int numberOfMatches(int n) 
    {
        int count=0;
        int temp =n;
        int match =0;
        while(temp!=1)
        {
            if(temp%2==0)
            {
                match = temp/2;
                //cout<<"Match"<<match<<endl;
                temp = temp/2;
                //cout<<"Advance"<<temp<<endl;
            }
            else
            {
                match=(temp-1)/2;
                //cout<<"Match"<<match<<endl;
                temp = ((temp-1)/2)+1;
                //cout<<"Advance"<<temp<<endl;
            }
            count+=match;
        }
        return count;
    }
};