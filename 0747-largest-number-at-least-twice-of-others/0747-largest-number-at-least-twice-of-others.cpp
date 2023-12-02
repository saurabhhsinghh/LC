class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int m=INT_MIN,add=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>m)
            {
                m=nums[i];
                add=i;
            }
        }
         for(int i=0;i<nums.size();i++)
        {
            if(i!=add)
            {
                if(nums[i]*2<=m)
                    c++;
            }
        }
        if(c==nums.size()-1)
        {
            return add;
        }
        return -1;
        
        
    }
};