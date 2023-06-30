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


        int leftIndex = searchLeft(mountainArr, target, 0, peakIndex);
        if (mountainArr.get(leftIndex) == target)
            return leftIndex;

        int rightIndex = searchRight(mountainArr, target, peakIndex + 1, n - 1);
        if (mountainArr.get(rightIndex) == target)
            return rightIndex;

        return -1;
    }

 private:
    
  int searchLeft(MountainArray& A, int target, int l, int r) {
    while (l < r) {
      int m = (l + r) / 2;
      if (A.get(m) < target)
        l = m + 1;
      else
        r = m;
    }
    return l;
  }

  int searchRight(MountainArray& A, int target, int l, int r) {
    while (l < r) {
      int m = (l + r) / 2;
      if (A.get(m) > target)
        l = m + 1;
      else
        r = m;
    }
    return l;
    }
};