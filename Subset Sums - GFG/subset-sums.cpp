//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void fn(int ind,int sum,vector<int> &arr,int N,vector<int> &subset){
    if(ind==N){
        subset.push_back(sum);
        return ;
    }
    fn(ind+1,sum+arr[ind],arr,N,subset);
    
    fn(ind+1,sum,arr,N,subset);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> subset;
        fn(0,0,arr,N,subset);
        sort(subset.begin(),subset.end());
        return subset;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends