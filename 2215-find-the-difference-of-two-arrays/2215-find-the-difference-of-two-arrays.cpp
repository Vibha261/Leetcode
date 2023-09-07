class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<vector<int>> answer;
        vector<int> ch;
        set<int> li;
        for(int i=0; i<nums1.size(); i++)
        {
            if(find(nums2.begin(),nums2.end(),nums1[i])==nums2.end())
            {
                li.insert(nums1[i]);
            }
        }
        ch.assign(li.begin(), li.end());
        answer.push_back(ch);
        li.clear();
        ch.clear();
        for(int i=0; i<nums2.size(); i++)
        {
            if(find(nums1.begin(),nums1.end(),nums2[i])==nums1.end())
            {
                li.insert(nums2[i]);
            }
        }
        ch.assign(li.begin(),li.end());
        answer.push_back(ch);
        return answer;
    }
};