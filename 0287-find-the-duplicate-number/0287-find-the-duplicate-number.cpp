class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]==2)
            {
                ans=nums[i];
                break;
            }
        }
    return ans;
    }
};