class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) 
    {
        int sze = logs.size();
        // int timetaken = logs[0][1];
        int maxitime = logs[0][1];
        int empid = logs[0][0];
        for(int i=1; i<sze; i++)
        {
            int timetaken = logs[i][1]-logs[i-1][1];
            cout<<"time taken "<<timetaken<<endl;
            if(timetaken==maxitime)
            {
                maxitime = timetaken;
                empid = min(empid, logs[i][0]);
            }
            else if(timetaken>maxitime)
            {
                maxitime = timetaken;
                empid = logs[i][0];
            }
            cout<<"maxitime "<<maxitime<<endl;
            cout<<"emp id "<<empid<<endl;
        }
        return empid;
    }
};