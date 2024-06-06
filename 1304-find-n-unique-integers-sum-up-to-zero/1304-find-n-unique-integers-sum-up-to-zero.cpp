class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v;
        if(n%2==0)
        {
            for(int i=n/2;i>0;i--)
                v.push_back(i);
            for(int i=-n/2;i<0;i++)
                v.push_back(i);
            
        }
        else
        {
            for(int i=n/2;i>0;i--)
                v.push_back(i);
            for(int i=-n/2;i<0;i++)
                v.push_back(i);
            
            v.push_back(0);
        }
        return v;
    }
    
};