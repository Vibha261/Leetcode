class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string check="";
        for(int i=0; i<words.size(); i++)
        {
            string wordy = words[i];
            check+=wordy[0];
        }
        cout<<check<<endl;
        return check==s;
    }
};