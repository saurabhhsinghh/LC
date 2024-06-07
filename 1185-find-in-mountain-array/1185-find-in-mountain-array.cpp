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
    int findInMountainArray(int target, MountainArray &mountainArr) {
         int start = 0, end = mountainArr.length() - 1, peak = -1;

        // Find the peak
        while(end != start){
           peak = start + (end - start) / 2;
           if(mountainArr.get(peak) < mountainArr.get(peak + 1) ){
              start = peak + 1;
           }
           else end = peak;
        }
        peak = start;

        int low=0;
        int high=peak;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mountainArr.get(mid)==target)
            {
            return mid;
            }
            else if(target>mountainArr.get(mid))
            low=mid+1;
            else
            high=mid-1;
        }
        low=peak;
        high=mountainArr.length() - 1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mountainArr.get(mid)==target)
            {
            return mid;
            }
            else if(target<mountainArr.get(mid))
            low=mid+1;
            else
            high=mid-1;
        }
        return -1;

    }
};