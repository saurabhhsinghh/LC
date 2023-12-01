class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long a=x;
        long long r=0,s=0;
        while(x)
        {
            r=x%10;
            s=10*s+r;
            x=x/10;
        }
        if(a==s)
            return true;
        else
            return false;
        
    }
};