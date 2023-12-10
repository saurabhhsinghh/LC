class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,mid;
        
        for(int i=0;i<nums.size();i++)
        {
            mid=(s+e)/2;
            if(target==nums[mid])
                return mid;
            else if(target<nums[mid])
                e=mid-1;
            else
                s=mid+1;
        }
        return -1;
    }
};