class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=nums.size();
        int s=(l*(l+1))/2;
        int sum=0;
        for(int i=0;i<l;i++)
        {
            sum=sum+nums[i];
        }
        int k=s-sum;
        return k;
    }
};