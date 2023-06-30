/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) 
    {
        int n = mountainArr.length();
        int peakIndex = 0;
        int start =0;
        int end = n-1;
        
        while (start < end) 
        {
            int m = (start + end) / 2;
            if (mountainArr.get(m) < mountainArr.get(m + 1))
                start = m + 1;
            else
                end = m;
        }
        peakIndex = start;

        int leftIndex = 0;
        start =0;
        end=peakIndex;
        
        while (start < end) 
        {
          int m = (start + end) / 2;
          if (mountainArr.get(m) < target)
            start = m + 1;
          else
            end = m;
        }
        leftIndex = start;
        if (mountainArr.get(leftIndex) == target)
            return leftIndex;

        int rightIndex = 0;
        start = peakIndex+1;
        end=n-1;
        
        while (start < end) 
        {
          int m = (start + end) / 2;
          if (mountainArr.get(m) > target)
            start = m + 1;
          else
            end = m;
        }
        rightIndex = start;
        if (mountainArr.get(rightIndex) == target)
            return rightIndex;

        return -1;
    }
};