class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int diff=INT_MAX;
        for(int i=0;i<nums.size()-2;i++)
        {
            int low=i+1;
            int high=nums.size()-1;
            while(low<high)
            {
                int sum=nums[low]+nums[high]+nums[i];
                if(abs(target-sum)<diff)
                {
                diff=abs(target-sum);
                ans=nums[low]+nums[high]+nums[i];
                }
                if(sum<target)
                low++;
                else if(sum>target)
                high--;
                else
                return sum;
            }
        }
        return ans;
    }
};