class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        int u=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i!=0&&i!=n-1)
            {
            if(nums[i]!=nums[i+1]&&nums[i]!=nums[i-1])
            u=u+nums[i];
            }
            else if(i==0)
            {
                if(nums[i]!=nums[i+1])
                u=u+nums[i];
            }
            else if(i==n-1)
            {
                if(nums[i]!=nums[i-1])
                u=u+nums[i];
            }
        }
        return u;
        
    }
};