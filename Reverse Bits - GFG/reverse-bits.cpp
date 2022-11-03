//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        long long rem=0;
        long long rev=0;
        int i=1;
        while(i<=32){
            rem=X%2;
            rev=rev*2+rem;
            X=X/2;
            i++;
        }
        return rev;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends