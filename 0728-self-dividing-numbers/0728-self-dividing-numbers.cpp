class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ans;
        // int flag=0;
        // for(int i=left; i<=right; i++)
        // {
        //     int temp=i;
        //     while(temp){
        //         int o=temp%10;
        //         if(o==0){
        //             flag++;
        //         }
        //         else if(i%o!=0){
        //                 flag++;
        //         }
        //         temp/=10;
        //     }
        //     if(flag==0){
        //         ans.push_back(i);
        //     }
        //     else{
        //         continue;
        //     }
        // }
        for(int i=left; i<=right; i++)
        {
            if(selfDividing(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
    private:
    bool selfDividing(int num)
    {
        for(int i=num; i>0; i/=10)
        {
            if(i%10==0||num%(i%10)!=0)
            {
                return false;
            }
        }
        return true;
    }
};