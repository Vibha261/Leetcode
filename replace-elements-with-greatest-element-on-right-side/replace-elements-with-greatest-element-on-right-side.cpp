class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        // int j=0;
        for(int i=0; i<n-1;i++)
        {
            int maxi = *max_element(arr.begin()+i, arr.end());
            cout<<"maxi "<<maxi<<endl;
            while(arr[i]!=maxi)
            {
                cout<<" if arr[i] "<<arr[i]<<" maxi "<<maxi<<endl;
                ans.push_back(maxi);
                i++;
            }
            if(arr[i]==maxi)
            {
                if(i!=n-1)
                {
                    maxi=*max_element(arr.begin()+i+1, arr.end());
                    ans.push_back(maxi);
                }
                
                cout<<" else arr[i] "<<arr[i]<<" maxi "<<maxi<<endl;
            }
        }
        ans.push_back(-1);
        return ans;
    }
};