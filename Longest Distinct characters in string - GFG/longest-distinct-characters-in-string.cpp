//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
     vector<int> mp(256,-1);
        int l=0,r=0,len=0;
        int n=S.size();
        while(r<n){
            if(mp[S[r]]!=-1) l=max(mp[S[r]]+1,l);
            mp[S[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        return len;
}