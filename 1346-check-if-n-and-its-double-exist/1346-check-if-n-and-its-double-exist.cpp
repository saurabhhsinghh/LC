class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j]*2==arr[i]&&j!=i)
                    return true;
                    
            }
        }
        return false;
        
    }
};