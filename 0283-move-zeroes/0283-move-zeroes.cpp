class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> non;
        int cnt=0;
        for(auto it: nums){
            if(it!=0){
                non.push_back(it);
            }
            else{
                cnt++;
            }
        }
        nums=non;
        for(int i=0; i<cnt; i++){
            nums.push_back(0);
        }
        
        
    }
};