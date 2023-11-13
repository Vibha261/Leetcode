class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels;
        for(auto c: s)
        {  
            if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                vowels.push_back(c);
        }
        string ans="";
        int i=vowels.size()-1;
        for(auto c: s)
        {
            if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            {
                ans+=vowels[i];
                i--;
            }
            else
            {
                ans+=c;
            }
        }
        return ans;
    }
};