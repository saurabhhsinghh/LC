class Solution {
public:
    int largestInteger(int num) {
        vector<int> v;
        vector<int> e;
            vector<int> o;
        while(num)
        {
            v.push_back(num%10);
            num=num/10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0)
                e.push_back(v[i]);
            else
                o.push_back(v[i]);
        }
        sort(e.begin(),e.end(),greater<int>());
        sort(o.begin(),o.end(),greater<int>());
        int k=0,c=0;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0)
            {
                v[i]=e[k];
                k++;
            }
            else
            {
                v[i]=o[c];
                c++;
            }
        }
        int t=0;
        for(int i=0;i<v.size();i++)
        {
            t=t*10+v[i];
        }
        return t;
        
    }
};