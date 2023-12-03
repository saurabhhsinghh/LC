class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0,index=0;
        for(i=0;i<nums.size()-1;i++)
        {
            index=i;
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[index]>nums[j])
                    index=j;
            }
            swap(nums[i],nums[index]);
        }
    }
};