//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

int firstOcc(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x)
        low=mid+1;
        else if(arr[mid]<x)
        high=mid-1;
        else{
            if(mid==0 || arr[mid]!=arr[mid+1])
            return mid;
            else
            high=mid-1;
        }
}
}
class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int ans=n-firstOcc(arr,n,0);
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends