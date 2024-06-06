class Solution {
public:
    bool isFascinating(int n) {
        int n1=n;
        int n2=2*n1;
        int n3=3*n1;
        map<int,int> m;
        for(int i=1;i<=3;i++)
        {
            int a=n1%10;
            if(a==0)
                return false;
            m[a]++;
            n1=n1/10;
        }
        for(int i=1;i<=3;i++)
        {
            int a=n2%10;
            if(a==0)
                return false;
            m[a]++;
            n2=n2/10;
        }
        for(int i=1;i<=3;i++)
        {
            int a=n3%10;
            if(a==0)
                return false;
            m[a]++;
            n3=n3/10;
        }
        for(int i=1;i<=9;i++)
        {
            if(m[i]>1)
            return false;
        }
        return true;
        
    }
};