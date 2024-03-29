//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int N)
{
    int sum=0,res=0,ans=0;
    for(int i=0;i<N;i++){
        sum+=A[i];
        res+=A[i]*i;
    }
    ans=max(ans,res);
    for(int i=0;i<N;i++){
        res=res+A[i]*N-sum;
        ans=max(ans,res);
    }
    return ans;
}