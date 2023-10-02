class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> answer;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==target)
            {
                answer.push_back(i);
            }
            if(answer.size()!=0 && nums[i]!=target)
            {
                break;
            }
        }
        return answer;
    }
};