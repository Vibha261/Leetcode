class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int answer = INT_MAX;
        set<int> s1{nums1.begin(), nums1.end()};
        set<int> s2{nums2.begin(), nums2.end()};
        for(auto ch: s1)
        {
            if(s2.count(ch))
            {
                answer = min(answer, ch);
            }
        }
        if(answer == INT_MAX)
        {
            return -1;
        }
        return answer;
    }
};