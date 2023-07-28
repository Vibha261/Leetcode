class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> discount(n);
        for(int i=0; i<n; i++)
        {
            int value = prices[i];
            for(int j=i+1; j<n; j++)
            {
                if(prices[i]>=prices[j])
                {
                    value=prices[i]-prices[j];
                    break;
                }
            }
            discount[i]=value;
        }
        return discount;
    }
};