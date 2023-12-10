class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1,m,f=-1;
        while(s<=e)
        {
            m=s + (e-s)/2;
            if(nums[m]==target)
            {
                f=m;
                e=m-1;
            }
            else if(nums[m]<target)
                s=m+1;
            else
                e=m-1;
        }
        s=0;
        e=n-1;
        int sec=-1;
        while(s<=e)
        {
            m=s + (e-s)/2;
            if(nums[m]==target)
            {
                sec=m;
                s=m+1;
            }
            else if(nums[m]<target)
                s=m+1;
            else
                e=m-1;
        }
        vector<int> z;
        z.push_back(f);
        z.push_back(sec);
        return z;
    }
};