class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int p=INT_MAX,mc=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                        if(nums[i] < nums[j]&&nums[k] < nums[j])
                        p=min(p,nums[i]+nums[j]+nums[k]);
                }
            }
        }
        if(p==INT_MAX)
            return -1;
        else
            return p;
    }
};