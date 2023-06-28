class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size()+nums2.size();
        vector<int> merge(n);
        double mid;
        int i=0;
        int j=0;
        int l=0;
        int count=0;
        int temp;
        while(count<n){
            if((i<nums1.size()) && (j<nums2.size())){
                if(nums1[i]<=nums2[j]){
                    temp = nums1[i++];
                }
                else{
                    temp = nums2[j++];
                }
            }
            else if(i<nums1.size()){
                temp=nums1[i++];
            }
            else{
                temp = nums2[j++];
            }
            merge[l++]=temp;
            count++;
        }
        int middle = n/2;
        if(n%2==0){
            mid=merge[middle]+merge[middle-1];
            mid=mid/2;
        }
        else{
            mid= merge[middle];
        }
        return mid;
    }
};