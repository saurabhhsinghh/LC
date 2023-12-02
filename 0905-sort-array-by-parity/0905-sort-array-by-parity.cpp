class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int> e;
        vector<int> o;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                e.push_back(nums[i]);
            else
                o.push_back(nums[i]);
        }
        int c=0,k=0,i=0;
        for(i=0;i<e.size();i++)
        {
            nums[i]=e[i];
        }
    
        for(i=e.size();i<nums.size();i++)
        {
            nums[i]=o[k++];
        }
        return nums;
    }
};