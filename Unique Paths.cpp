#include <bits/stdc++.h> 
int solve(int m,int n){
	vector<vector<int>>dp(m,vector<int>(n,-1));
	
	dp[0][0]=1;
    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
                  if (i - 1 >= 0 && j - 1 >= 0) {
                    int left = dp[i][j-1];
                    int up = dp[i-1][j];

                    dp[i][j] = left + up;
                  }
                }
	}
	return -dp[m-1][n-1];
}
int uniquePaths(int m, int n) {
	// Write your code here.
	//vector<vector<int>>dp(m,vector<int>(n,-1));
	if(m==1 && n==1)return 1;
	return solve(m,n);
}
