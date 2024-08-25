class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length();
        int index;
        int count=0;
        for(int i=l-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                index=i;
                break;
            }

        }
        for(int i=index;i>=0;i--)
        {
            if(s[i]==' ')
            break;

            count++;
        }
        return count;
    }
};