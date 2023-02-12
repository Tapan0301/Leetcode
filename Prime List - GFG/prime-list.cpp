//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/
bool isPrime(int num) {
  if (num <= 1) return false;
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) return false;
  }
  return true;
}
int nearestPrime(int num){
     int lower = num - 1;
  int upper = num + 1;
  
  while (true) {
    if (isPrime(lower)) {
      return lower;
      break;
    } else if (isPrime(upper)) {
      return upper;
      break;
    }
    lower--;
    upper++;
  }
}
class Solution{
public:
    Node *primeList(Node *head){
    Node *curr = head;
    while (curr)
    {
        if (!isPrime(curr->val))

        {
            int new_val = nearestPrime(curr->val);
            curr->val = new_val;
        }
        curr = curr->next;
    }
        return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends