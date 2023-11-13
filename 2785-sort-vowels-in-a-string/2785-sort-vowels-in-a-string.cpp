class Solution {
public:
    string sortVowels(string s) {
        string ans="";
        vector<char> vowels;
        for(auto c: s)
        {
            if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            {
                vowels.push_back(c);
            }
        }
        sort(vowels.begin(), vowels.end());
        int i=0;
        for(auto c: s)
        {
            if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            {
                ans+=vowels[i];
                i++;
            }
            else
            {
                ans+=c;
            }
        }
        return ans;
    }
};