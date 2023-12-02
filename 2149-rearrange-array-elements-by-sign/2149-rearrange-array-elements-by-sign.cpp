class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p;
        vector<int> n;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
                p.push_back(nums[i]);
            else
                n.push_back(nums[i]);
        }
        int k=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
                nums[i]=p[c++];
            else
                nums[i]=n[k++];
        }
        return nums;
    }
};