class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
        int n=image.size();
        vector<vector<int>> invert;
        int ni = image[0].size();
        vector<int> re(ni);
        int idx=0;
        for(int i=0; i<n; i++)
        {
            idx=0;
            for(int j=ni-1; j>=0; j--)
            {
                if(image[i][j]==1)
                {
                    re[idx]=0;
                    idx++;
                }
                else
                {
                    re[idx]=1;
                    idx++;
                }
            }
            invert.push_back(re);
        }
        return invert;
        // vector<vector<int>> invert;
        // vector<vector<int>> reverse;
        // vector<int> re;
        // for(int i=0; i<image.size(); i++)
        // {
        //     for(int j=image[i].size()-1; j>=0; j--)
        //     {
        //         re.push_back(image[i][j]);
        //     }
        //     reverse.push_back(re);
        //     re.clear();
        // }
        // for(int i=0; i<reverse.size(); i++)
        // {
        //     re.clear();
        //     for(int j=0; j<reverse[i].size(); j++)
        //     {
        //         cout<<reverse[i][j]<<" ";
        //         if(reverse[i][j]==1)
        //         {
        //             re.push_back(0);
        //         }
        //         else
        //         {
        //             re.push_back(1);
        //         }
        //     }
        //     invert.push_back(re);
        //     cout<<endl;
        // }
        // return invert;
    }
};