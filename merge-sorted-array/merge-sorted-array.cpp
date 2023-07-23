class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int newSize= m+n;
        vector<int> merger(newSize);
        int i=0,j=0,k=0;
        int count=0;
        int temp;
        while(count<newSize){
            if(i<m && j<n){
                if(nums1[i]<=nums2[j]){
                    temp=nums1[i++];
                }
                else{
                    temp=nums2[j++];
                }
            }
            else if(i<m){
                temp=nums1[i++];
            }
            else{
                temp=nums2[j++];
            }
            merger[k++]=temp;
            count++;
        }
        for(int ch=0;ch<merger.size();ch++){
            nums1[ch]=merger[ch];
        }
    }
};