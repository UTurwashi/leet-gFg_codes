//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int findNum(int n)
        {
        //complete the function here
        int l=0;
        int h=5*n;
        int ans=h;
        while(l<=h){
            int mid=l+(h-l)/2;
            int count=0;
            int num=5;
            while(mid/num!=0){
                count+=mid/num;
                num*=5;
            }
            if(count<n) l=mid+1;
            else{
                ans=min(ans,mid);
                h=mid-1;
            }
        }
        return ans;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends