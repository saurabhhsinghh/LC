class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,mid,n=nums.size(),index=0;
        
        while(s<=e)
        {
            mid=(s+e)/2;
            if(target==nums[mid])
            {
                index=mid;
                break;
            }
                
            else if(target<nums[mid])
            {
                e=mid-1;
                index=mid;
            }
            else
            {
                s=mid+1;
                index=mid+1;
            }
        }
        return index;
    }
};