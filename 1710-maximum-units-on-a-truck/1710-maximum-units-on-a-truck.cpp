class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [&](vector<int> &a, vector<int> &b)
             {
                 return a[1]>b[1];
             });
        int n=boxTypes.size();
        int sum=0;
        for(int i=0; i<n; i++)
        {
            // cout<<boxTypes[i][0]<<" "<<boxTypes[i][1]<<endl;
            if( boxTypes[i][0]<truckSize)
            {
                sum+=boxTypes[i][0]*boxTypes[i][1];
                cout<<"Sum "<<sum<<endl;
                truckSize-=boxTypes[i][0];
                cout<<"Truck Size "<<truckSize<<endl<<endl;
            }
            else if(boxTypes[i][0]>=truckSize)
            {
                // cout<<"Sum "<<sum<<endl;
                sum+=truckSize*boxTypes[i][1];
                cout<<"Sum "<<sum<<endl;
                truckSize-=truckSize;
                cout<<"Truck Size "<<truckSize<<endl<<endl;
                break;
            }
        }
        return sum;
    }
};