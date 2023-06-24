#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	set<int>s;
	for(auto &i:arr){
		if(s.count(i))
		return i;
		s.insert(i);
	}
	return -1;
}
