//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int gcd(int a, int b){
        if (b == 0) return a;
        else return gcd(b, a % b);
    }
int minimumNumber(int n,vector<int> &arr){
        int ans=arr[0];
        for(int i=1;i<n;i++) 
            ans=gcd(arr[i],ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.minimumNumber(n,arr)<<endl;
    }
}
// } Driver Code Ends