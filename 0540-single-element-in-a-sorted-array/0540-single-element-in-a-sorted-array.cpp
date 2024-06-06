class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        if (nums.size() == 1) 
            return nums[0];
        
        if(nums[0]!=nums[1])
                return nums[0];
        
            if(nums[nums.size()-1]!=nums[nums.size()-2])
                return nums[nums.size()-1];
            
            low++;
            high--;
        while(low<=high)
        {
            
            int mid=low+(high-low)/2;
            if(nums[mid-1]!=nums[mid]&&nums[mid]!=nums[mid+1])
                return nums[mid];
            else if((mid%2==0&&nums[mid]==nums[mid+1])||(mid%2==1&&nums[mid-1]==nums[mid]))
                low=mid+1;
            else
                high=mid-1;
        }
        return -1;
    }
};