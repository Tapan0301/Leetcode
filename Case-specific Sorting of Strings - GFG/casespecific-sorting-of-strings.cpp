//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<char> vec1,vec2;
        for(auto it:str){
            if(it>='a' && it<='z'){
                vec1.push_back(it);
            }else{
                vec2.push_back(it);
            }
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        int i=0,j=0;
        string ans="";
        for(auto it:str){
            if(it>='a' && it<='z'){
                ans+=vec1[i];
                i++;
            }else{
                ans+=vec2[j];
                j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends