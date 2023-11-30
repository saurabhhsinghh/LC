class Solution {
public:
    int addDigits(int num) {
        int rem=0;
        
        int m=num;
        while(m>9)
        {
            int s=0;
        while(m)
        {
            rem=m%10;
            s=s+rem;
            m=m/10;
        }
        m=s;

        }
        return m;
        
        
        
        
       
    }
};