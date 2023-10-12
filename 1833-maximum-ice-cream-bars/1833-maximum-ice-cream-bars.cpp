class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int bars=0;
        if(coins<costs[0])
        {
            return 0;
        }
        for(int i=0; i<costs.size(); i++)
        {
            if(coins>0)
            {
                coins-=costs[i];
                cout<<"coins "<<coins<<endl;
                bars+=1;
                cout<<"bars "<<bars<<endl;
            }
            else if(coins<=0)
            {
                break;
            }
            // else
            // {
            //     cout<<"else bars "<<bars<<endl;
            //     bars=bars-1;
            //     cout<<" final bars "<<bars<<endl;
            //     break;
            // }
        }
        if(coins<0)
        {
            bars=bars-1;
        }
        return bars;
    }
};