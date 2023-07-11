//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *es=NULL ,*ee=NULL,*os=NULL, *oe=NULL;
        for(Node* temp=head;temp!=NULL;temp=temp->next){
            if(temp->data %2==0){
                if(es==NULL){
                    es=temp;
                    ee=temp;
                    }
                else{
                    ee->next=temp;
                    ee=ee->next;
                    }
            }
            else{
                if(os==NULL){ os=temp;
                oe=temp;
                }
                else{
                    oe->next=temp;
                    oe=oe->next;
                }
            }
        }
        if(os==NULL || es==NULL) return head;
        ee->next=os;
        oe->next=NULL;
        return es;
    }

};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends