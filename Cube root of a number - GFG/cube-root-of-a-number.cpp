//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cubeRoot(int N) {
        // code here
        long s=1,e=N,m,i;
        while(s<=e)
        {
            m=(s+e)/2;
            if(m*m*m==N)
            {
                return (int)m;
            }
            else if(m*m*m<N)
            {
                s=m+1;
                i=m;
            }
            else
            {
                e=m-1;
                
            }
        }
        return (int)i;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.cubeRoot(N) << endl;
    }
    return 0;
}
// } Driver Code Ends