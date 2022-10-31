//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

int jump(int i,int A[],int N){
    if(i==N-1)
    return 1;
    for(int k=i+1;k<=A[i]+i;k++){
        if(jump(k,A,N)) return 1;
    }
    return 0;
}
class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
         return jump(0,A,N);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends