class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        int c=0;
        int n=sentences.size();
        for(int i=0;i<n; i++){
            for(int j=0; j<sentences[i].length();j++){
                if(sentences[i][j]==' ')
                    c++;
                if(ans<c)
                ans=c;
            }
            c=0;
            
        }
        return ans+1;
    }
};