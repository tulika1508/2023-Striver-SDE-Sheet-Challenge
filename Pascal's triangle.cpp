#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>>arr(n);
  for(int i=0;i<n;i++){
    arr[i].resize(i+1);
    arr[i][0]=1;arr[i][i]=1;
    for(int j=1;j<i;j++){
       arr[i][j]=1LL*(arr[i-1][j-1]+arr[i-1][j]);
    }
  }
  return arr;
}
