class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0; i<mat.size();i++)
        {
            sum+=mat[i][i];
        }
        int j=mat.size()-1;
        for(int i=0;i<mat.size();i++)
        {
            sum+=mat[i][j];
            j--;
        }
        int n=mat.size()/2;
        if(mat.size()%2!=0){
            sum-=mat[n][n];
        }
        return sum;
    }
};