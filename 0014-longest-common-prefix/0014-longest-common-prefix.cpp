class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str1 = strs[0];
        int n = strs.size();
        for(int i=1; i<n;i++)
        {
            int count=0;
            string check = strs[i];
            for(int j=0; j<strs[i].length();j++)
            {
                if(str1[j]==check[j])
                {
                    count+=1;
                }
                else
                {
                    break;
                }
            }
            str1 = str1.substr(0,count);
        }
        return str1;
    }
};