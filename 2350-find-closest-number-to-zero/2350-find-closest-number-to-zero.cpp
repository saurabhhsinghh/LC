class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans=0;
        int diff=INT_MAX;
        int ndiff=0;
        for(int i=0;i<nums.size();i++)
        {
            ndiff=abs(nums[i]-0);
            if(ndiff<diff)
            {
                diff=ndiff;
                ans=nums[i];
            }
            else if(ndiff==diff)
            {
                if(nums[i]>ans)
                ans=nums[i];
            }
        }
        return ans;
    }
};