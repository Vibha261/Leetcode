class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> st;
        set<int> s1{nums1.begin(), nums1.end()};
        set<int> s2{nums2.begin(), nums2.end()};
        for(auto ch: s1)
        {
            if(s2.count(ch))
            {
                st.push_back(ch);
            }
        }
        return st;
    }
};