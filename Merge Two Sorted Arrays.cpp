#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int>arr(m+n);
	int i=0,j=0,k=0;
	while(i<m && j<n){
          if (arr1[i] < arr2[j]) {
            arr[k] = arr1[i];
            i++;k++;
          }
		  else if (arr1[i] > arr2[j]) {
            arr[k] = arr2[j];
            j++;k++;
          }
		  else{
			arr[k] = arr2[j];k++;
			arr[k]=arr2[j];
            j++;k++;i++;
		  }
    }
	while(i<m){
		arr[k]=arr1[i];i++;k++;
	}
	while(j<n){
		arr[k]=arr2[j];j++;k++;
	}
	return arr;
}
