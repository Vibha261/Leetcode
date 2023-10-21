class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        // sort(arr.begin(),arr.end(), greater<int>());
        for(int i=0; i<n; i++)
        {
            int check = arr[i];
            // if(check==0)
            // {
            //     continue;
            // }
            for(int j=0; j<n; j++)
            {
                if(i!=j && check == 2*arr[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};