class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1)
        {
            return false;
        }
        vector<int> perfect;
        int check = num;
        for(int i=1; i*i<=num; i++)
        {
            if(num%i==0)
            {
                perfect.push_back(i);
                if(num/i!=num && num/i!=i)
                {
                    perfect.push_back(num/i);
                }
            }
            
        }
        int sum=0;
        for(int i=0; i<perfect.size(); i++)
        {
            sum+=perfect[i];
        }
        if(sum==check)
        {
            return true;
        }
        return false;
    }
};