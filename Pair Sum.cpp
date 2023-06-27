#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>>ans;
   sort(arr.begin(),arr.end());
   int n=arr.size();
   for(int i=0;i<arr.size();i++){
      int t=s-arr[i];
      int l=lower_bound(arr.begin()+i+1,arr.end(),t)-arr.begin();
      int u=upper_bound(arr.begin()+i+1,arr.end(),t)-arr.begin();
      int cnt=u-l;
      while(cnt){
          vector<int>v={arr[i],t};
          ans.push_back(v);
          cnt--;
      }
   }
   return ans;
}
