class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
        int first=nums[i]*(-1);
        if((i>0)&&(-first==nums[i-1]))
        continue;
        int low=i+1;
        int high=nums.size()-1;
        while(low<high)
        {
            if(nums[low]+nums[high]==first)
            {
            ans.push_back({-first,nums[low],nums[high]});
            low++;
            high--;
            while(low<high&&nums[low]==nums[low-1])
            low++;
            while(low<high&&nums[high]==nums[high+1])
            high--;
            }
            else if(nums[low]+nums[high]<first)
            low++;
            else
            high--;
        }
        }
        return ans;
    }
};