class Solution {
public:
    int commonFactors(int a, int b) 
    {
        int count=0;
        vector<int> temp1;
        vector<int> temp2;
        for(int i=1,j=1; i<=a, j<=b; i++,j++)
        {
            if(a%i==0)
            {
                temp1.push_back(i);                
                // if(a/i!=i){
                //     temp1.push_back(a/i);
                // }
                
            }
            if(b%j==0){
                temp2.push_back(j);
                // if(b/j!=j){
                //     temp2.push_back(b/j);
                // }
            }
        }
        for(int i=0; i<temp1.size();i++)
        {
            for(int j=0; j<temp2.size();j++)
            {
                if(temp1[i]==temp2[j]){
                    cout<<temp1[i]<<endl;
                    count++;
                }
            }
        }
        return count;
    }
};