class Solution {
public:
    int differenceOfSum(vector<int>& nums) 
    {
        int n=nums.size();
        int y=0;
        int x=0;
        int diff;
        for(int i=0; i<n; i++)
        {
            x+=nums[i];
            cout<<"X="<<x<<endl;
            if(nums[i]/10==0){
                y+=nums[i];
                cout<<"Y="<<y<<endl;
            }
            else{
                int temp = nums[i];
                while(temp){
                    int v= temp%10;
                    y+=v;
                    temp/=10;
                    cout<<y<<endl;
                }
            }
        }
        diff = abs(x-y);
        return diff;
    }
};