class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long p=-1,mc;
        for(long long i=0;i<nums.size();i++)
        {
            for(long long j=i+1;j<nums.size();j++)
            {
                for(long long k=j+1;k<nums.size();k++)
                {
                    mc=(long long)(nums[i] - nums[j]) * (long long)(nums[k]);
                        if(p<mc)
                        p=mc;
                }
            }
        }
        if(p<0)
            return 0;
        else
            return p;
        
    }
};