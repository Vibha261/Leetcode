class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=0; i<nums.size(); i++){
            int j=i;
            while(j<nums.size() && nums[i]==nums[j]){
                j++;
            }
            nums[k++]=nums[i];
            i=j-1;
        }
        return k;
    }
};