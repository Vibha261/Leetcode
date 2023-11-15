class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> answer;
        if(n==1)
        {
            return {0};
        }
        if(n%2 != 0)
        {
            answer.push_back(0);
        }
        for(int i=1; i<=n/2; i++)
        {
            answer.push_back(i);
            answer.push_back(i*-1);
        }
        return answer;
    }
};