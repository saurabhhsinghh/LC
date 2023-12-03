class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int ans=0;
        int z=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1]&&z!=5)
            {
                ans++;
                z=5;
            }
            else if(nums[i]>nums[i-1]&&z!=10)
            {
                ans++;
                z=10;
                
            }
        }
        return ans+1;
    }
};