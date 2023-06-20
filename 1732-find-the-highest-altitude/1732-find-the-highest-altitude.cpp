class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int hi;
        int arr[n+1];
        arr[0]=0;
        for(int i=0; i<gain.size(); i++){
            arr[i+1] = arr[i]+gain[i];
        }
        sort(arr,arr+n+1);
        hi = arr[n];
        return hi;
    }
};