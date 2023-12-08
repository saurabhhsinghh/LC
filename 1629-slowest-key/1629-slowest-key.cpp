class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
    
        char res=keysPressed[0];
        int t=releaseTimes[0];
        
        for(int i=1;i<releaseTimes.size();i++)
        {
            if(releaseTimes[i]-releaseTimes[i-1]>=t)
            {
                if(releaseTimes[i]-releaseTimes[i-1]==t)
                {
                    res=max(res,keysPressed[i]);
                }
                    else
                    {
                        res=keysPressed[i];
                
                    }
                t=releaseTimes[i]-releaseTimes[i-1];
            }
        }
        return res;
        
    }
};
/*int max_p = times[0], res = keys[0];
    for (auto i = 1; i < times.size(); ++i)
        if (max_p <= times[i] - times[i - 1]) {
            if (max_p == times[i] - times[i - 1])
                res = max((char)res, keys[i]);
            else
                res = keys[i];
            max_p = times[i] - times[i - 1];
        }
    return res;*/