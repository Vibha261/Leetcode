class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int sze = indices.size();
        vector<vector<int>> matrix(m,vector<int>(n));
        int count=0;
        for(int i=0; i<m;i++)
        {
            for(int j=0; j<n; j++)
            {
                matrix[i][j]=0;
            }
        }
        for(int i=0; i<sze; i++)
        {
            for(int j=0; j<n; j++)
            {
                int check = indices[i][0];
                matrix[check][j]+=1;
            }
            for(int j=0; j<m; j++)
            {
                int check = indices[i][1];
                matrix[j][check]+=1;
            }
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                // cout << matrix[i][j]<<" ";
                if(matrix[i][j]%2!=0)
                {
                    count++;
                }
            }
            // cout<<endl;
        }
        return count;
    }
};