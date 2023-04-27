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
    unordered_map<char, int> mp;
    int ans = 0, count=0;
    for(int i=0;i<S.size();i++){
        if(i==0 || mp[S[i]]==0){
            mp[S[i]]=i;
        }
        else{
            int p = mp.size();
            ans=max(ans,p);
            i=mp[S[i]];
            mp.clear();
        }
    }
    int p = mp.size();
    ans=max(ans,p);
    return ans;
}