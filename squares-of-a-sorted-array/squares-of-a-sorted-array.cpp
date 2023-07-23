class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> negative;
        vector<int> positive;
        vector<int> fnl;
        for(int i=0; i<n; i++)
        {
            if(nums[i]<0)
            {
                negative.push_back(nums[i]*nums[i]);
            }
            else
            {
                positive.push_back(nums[i]*nums[i]);
            }
        }
        int negative_size = negative.size();
        int positive_index=0;
        int negative_index=1;
        int positive_size = positive.size();
        while(negative_index<=negative_size && positive_index<positive_size)
        {
            if(positive[positive_index]<negative[negative_size - negative_index])
            {
                fnl.push_back(positive[positive_index]);
                positive_index++;
            }
            else if(positive[positive_index]==negative[negative_size - negative_index])
            {
                fnl.push_back(positive[positive_index]);
                positive_index++;
                fnl.push_back(negative[negative_size - negative_index]);
                negative_index++;
            }
            else
            {
                fnl.push_back(negative[negative_size - negative_index]);
                negative_index++;
            }    
        }
        while(positive_index<positive_size)
        {
            fnl.push_back(positive[positive_index]);
            positive_index++;
        }
        while(negative_index<=negative_size)
        {
            fnl.push_back(negative[negative_size - negative_index]);
            negative_index++;
        }
        
        // int j= 1;
        // for(int i = 0; i<positive.size(); i++)
        // {
        //    if(j<=si)
        //    {
        //        if(positive[i]>=negative[si-j])
        //        {
        //            positive.insert(positive.begin()+i, negative[si-j]);
        //            j++;
        //        }
        //    }
        // }
        return fnl;
    }
};