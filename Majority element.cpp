#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	unordered_map<int,int>m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	for(auto &i:m){
		if(i.second>(n/2))
		return i.first;
	}
	return -1;
}
