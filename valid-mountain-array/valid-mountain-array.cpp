class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n==1)
        {
            return false;
        }
        int i=0;
        for(; i<n-1;i++)
        {
            cout<<" first loop i "<<i<<endl;
            if(arr[i]==arr[i+1])
            {
                return false;
            }
            if(arr[i]<arr[i+1])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if(i==n-1)
        {
            cout<<" if i==n-2 i "<<i<<endl;
            if(arr[n-2]<arr[n-1])
            {
                return false;
            }
            else if(arr[n-2]>arr[n-1] && i!=0)
            {
                return true;
            }
        }
        if(i==0)
        {
            cout<<" if i==0 i "<<i<<endl;
            return false;
        }
        else
        {
            cout<<" else i "<<i<<endl;
            for(;i<n-1;i++)
            {
                cout<<" second loop i "<<i<<endl;
                if((arr[i]<arr[i+1])||(arr[i]==arr[i+1]))
                {
                    return false;
                }
                else{
                    continue;
                }
            }
        }
        return true;
    }
};