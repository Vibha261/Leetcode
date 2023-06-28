class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans;
        int n=indices.size();
        vector<string> correct(n);
        for(int i=0; i<n; i++){
            correct[indices[i]]=s[i];
        }
        for(int i=0; i<n; i++){
            ans+=correct[i];
        }
        return ans;
    }
};