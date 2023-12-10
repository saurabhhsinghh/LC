class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
            return x;
        int s=1,e=x,mid,index=0;
        
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(mid==x/mid)
            {
                index=mid;
                break;
            }
                
            else if(mid<x/mid)
            {
                s=mid+1;
                index=mid;
            }
            else
            {
                e=mid-1;
                index=mid-1;
            }
        }
        return index;
        
    }
};