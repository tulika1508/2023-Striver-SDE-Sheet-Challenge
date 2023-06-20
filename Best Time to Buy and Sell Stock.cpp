#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int min=prices[0],maxi=0;
    for(int i=1;i<prices.size();i++){
        maxi=max(maxi,prices[i]-min);
        if(prices[i]<min)
        min=prices[i];
    }
    return maxi;
}
