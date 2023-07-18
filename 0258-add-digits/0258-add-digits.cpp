class Solution {
public:
    int addDigits(int num) 
    {
        int sum=0;
        int temp = num;
//         while(temp)
//         {
//             int val = temp%10;
//             sum+=val;
//             temp/=10;
//             if(sum/10 ==0 ){
//                 break;
//             }
//             else{
                
//             }
//         }
        while(temp)
        {
            sum=0;
            num=temp;
            while(num)
            {
                int val = num%10;
                sum+=val;
                num=num/10;
            }
            // cout<<"sum:"<<sum<<endl;
            temp=sum;
            if(temp/10==0)
            {
                break;
            }
        }
        return sum;
    }
};