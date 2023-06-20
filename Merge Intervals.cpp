#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;
    vector<int>v=intervals[0];
    for(int i=0;i<intervals.size();i++){
       if(intervals[i][0]<=v[1]){
           v[1]=max(v[1],intervals[i][1]);
       }
       else{
           ans.push_back(v);
           v=intervals[i];
       }
    }
    ans.push_back(v);
    return ans;
}
