class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            neg.push_back(nums[i]);
            else
            pos.push_back(nums[i]);
        }
        for(int i=0;i<neg.size();i++)
        neg[i]=neg[i]*neg[i];
        for(int i=0;i<pos.size();i++)
        pos[i]=pos[i]*pos[i];
        reverse(neg.begin(),neg.end());

        int a=0,b=0,k=0;
        while((a<neg.size())&&(b<pos.size()))
        {
            if(neg[a]<pos[b])
            {
                nums[k]=neg[a];
                k++;
                a++;
            }
            else
            {
                nums[k]=pos[b];
                k++;
                b++;
            }
        }
        while(a<neg.size())
        {
            nums[k]=neg[a];
            k++;
            a++;
        }
        while(b<pos.size())
        {
            nums[k]=pos[b];
                k++;
                b++;
            
        }
        return nums;
    }
};