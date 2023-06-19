
#include <bits/stdc++.h>
void setRow(vector<vector<int>> &matrix,vector<vector<int>> &vis,int row,int n){
	for(int i=0;i<n;i++){
		if(!vis[row][i]&& matrix[row][i]!=0){
			matrix[row][i]=0;
			vis[row][i]=1;
		}
	}
}
void setCol(vector<vector<int>> &matrix,vector<vector<int>> &vis,int col,int m){
	for(int i=0;i<m;i++){
		if(!vis[i][col] && matrix[i][col]!=0){
			matrix[i][col]=0;
			vis[i][col]=1;
		}
	}
}
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int m=matrix.size();
	int n=matrix[0].size();
	vector<vector<int>>vis(m,vector<int>(n,0));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]==0 && !vis[i][j])
			{
				setRow(matrix,vis,i,n);
				setCol(matrix,vis,j,m);
			}
		}
	}
}