// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans=0;
        for(int i=n; i>=0; i--)
        {
            if(!isBadVersion(i))
            {
                ans = i+1;
                break;
            }
        }
        return ans;
    }
};