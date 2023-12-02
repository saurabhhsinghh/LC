class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> f;
        vector<int> s;
        vector<int> p;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
                f.push_back(nums[i]);
            else if(nums[i]>pivot)
                s.push_back(nums[i]);
            else if(nums[i]==pivot)
                p.push_back(nums[i]);
        }
        int c=0,k=0,z=0,i=0;
        for(i=0;i<f.size();i++)
        {
            nums[i]=f[i];
        }
        while(k<p.size())
        {
            nums[i++]=p[k++];
            
        }
        while(z<s.size())
        {
            nums[i++]=s[z++];
        }
        return nums;
    }
};