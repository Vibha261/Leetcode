class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        int number = 0.05*n;
        cout<<number<<endl;
        sort(arr.begin(), arr.end());
        cout<<"After sorting"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        arr.erase(arr.end()-number, arr.end());
        cout<<"After removing large"<<endl;
        for(int i=0; i<arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        arr.erase(arr.begin(), arr.begin()+number);
        cout<<"After removing small"<<endl;
        for(int i=0; i<arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        double sum = accumulate(arr.begin(), arr.end(), 0);
        cout<<sum<<endl;
        return sum/arr.size();
    }
};