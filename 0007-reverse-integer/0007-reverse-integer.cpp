class Solution {
public:
    int reverse(int x) {
        int r=0;
        int n=0;
        while(x)
        {
            r=x%10;
            if((n>INT_MAX/10)||(n<INT_MIN/10))
            {
                return 0;
            }
            n=10*n+r;
            x=x/10;

        }
        return n;
        cout<<endl;
    }
};