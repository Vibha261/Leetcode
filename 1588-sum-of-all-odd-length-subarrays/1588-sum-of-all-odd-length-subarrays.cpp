class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int result=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int odd= ((i+1)*(n-i) +1)/2;
            result+= odd* arr[i];
        }
        return result;
    }
};