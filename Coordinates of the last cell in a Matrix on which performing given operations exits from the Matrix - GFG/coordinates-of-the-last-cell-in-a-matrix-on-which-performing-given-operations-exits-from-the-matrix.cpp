//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
         int n=matrix.size(), m=matrix[0].size();

        int i=0, j=0;

        int dir[][2]={{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        int k=0;

        while (i>=0 and j>=0 and i<n and j<m){

            if (matrix[i][j]==0){

                i+=dir[k][0];

                j+=dir[k][1];

            }

            else{

                k=(k+1)%4;

                matrix[i][j]=0;

                i+=dir[k][0];

                j+=dir[k][1];

            }

        }

        i-=dir[k][0]; j-=dir[k][1];

        return {i, j};
    }

};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends