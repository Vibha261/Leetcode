class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        for(int i=0; i<nums.size(); i+=2){
            int fre = nums[i];
            int val = nums[i+1];
            for(int j=fre; j>0; j--){
                v.push_back(val);
            }
        }
        return v;
    }
};