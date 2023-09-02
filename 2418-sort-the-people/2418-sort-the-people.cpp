class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string, greater<int>> st;
        vector<string> answer;
        for(int i=0; i<names.size(); i++)
        {
            st[heights[i]]=names[i];
        }
        for(auto c:st)
        {
            // cout<<c.first<<"->"<<c.second<<endl;
            answer.push_back(c.second);
        }
        return answer;
    }
};