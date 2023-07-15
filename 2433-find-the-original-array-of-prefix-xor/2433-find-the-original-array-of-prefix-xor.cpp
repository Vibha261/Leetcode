class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        int n=pref.size();
        int temp=0;
        ans.push_back(pref[0]);
        for(int i=0; i<n-1; i++)
        {
            // cout<<sum<<endl;
            temp=pref[i]^pref[i+1];
            // cout<<sum<<endl<<endl;
            ans.push_back(temp);
        }
        return ans;
    }
};