class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       set<int> non;
        for(auto it:nums){
            non.insert(it);
        }
        int s = non.size();
        if(s==nums.size())
            return false;
        return true;
        
    }
};