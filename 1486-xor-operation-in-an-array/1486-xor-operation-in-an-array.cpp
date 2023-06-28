class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=start;
        vector<int> arr(n);
        arr[0]=start;
        for(int i=1; i<n; i++){
            arr[i]=start+2*i;
        }
        for(int i=1; i<n; i++){
            ans^=arr[i];
        }
        return ans;
    }
};