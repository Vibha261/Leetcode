class Solution {
public:
    double average(vector<int>& salary) {
        double divi = salary.size()-2;
        sort(salary.begin(), salary.end());
        double sum=0;
        double ans=0;
        for(int i=1; i<salary.size()-1; i++)
        {
            sum+=salary[i];
        }
        ans = sum/divi;
        return ans;
    }
};