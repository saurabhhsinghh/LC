class Solution {
public:
    int minOperations(vector<int>& nums) {
        int l=nums.size();
        int c=0;
        for(int i=0;i<l-1;i++)
        {
            if(nums[i+1]<=nums[i])
            {
                
                c= c + (nums[i]-nums[i+1]) + 1;
                nums[i+1]=nums[i] + 1;
            }
        }
        return c;
    }
};