//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool matched(char a,char b){
       return((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
   }
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(char c:x){
            if(c=='[' || c=='{' || c=='(')
             st.push(c);
             else{
                 if(st.empty()==true) return false;
                 else if(matched(st.top(),c)==false) return false;
                 else st.pop();
             }
        }
        return (st.empty()==true);
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends