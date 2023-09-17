class NumArray {
    vector<int> value;
public:
    NumArray(vector<int>& nums) {
        value = nums;
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left; i<=right; i++)
        {
            sum+=value[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */