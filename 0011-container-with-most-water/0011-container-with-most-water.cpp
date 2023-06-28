class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_A=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            max_A = max(max_A, min(height[l], height[r])*(r-l));
            if(height[l]<height[r]){
                l++;
            }
            
            else{
                r--;
            }
        }
        return max_A;
    }
};