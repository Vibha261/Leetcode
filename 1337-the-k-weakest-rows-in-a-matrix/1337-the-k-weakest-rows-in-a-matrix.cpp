class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>> store;
        vector<int> answer;
        int count=0;
        for(int i=0; i<mat.size(); i++)
        {
            for(int j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            store.push_back({i,count});
            count=0;
        }
        sort(store.begin(), store.end(), [&](vector<int>& a, vector<int>& b)
             {
                 if(a[1]==b[1])
                 {
                     return a[0]<b[0];
                 }
                 return a[1]<b[1];
             });
        for(int i=0; i<k; i++)
        {
            // cout<<store[i][0]<<"->"<<store[i][1]<<endl;
            answer.push_back(store[i][0]);
        }
        return answer;
    }
};