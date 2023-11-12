class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.length();
        int count=0;
        for(int i=0; i<words.size(); i++)
        {
            string check = words[i].substr(0, n);
            // cout<<check<<endl;
            if(check == pref)
            {
                count++;
            }
        }
        return count;
    }
};