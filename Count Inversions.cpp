#include <bits/stdc++.h> 
long long gi=0;
void merge(vector<long long>& left,vector<long long>& right,vector<long long>&nums){
        int i=0,j=0,k=0;
        int nl=left.size();int nr=right.size();
        while(i<nl && j<nr){
            if(left[i]<=right[j])
            nums[k++]=left[i++];
            else
            {
                nums[k++]=right[j++];
                gi+=nl-i;
            }
        }
        while(i<nl)
        nums[k++]=left[i++];
        while(j<nr)
        nums[k++]=right[j++];
    }
    void mergesort(vector<long long>&nums){
        int n=nums.size();
        if(n<2)return;
        int mid=n/2;vector<long long>left(mid);vector<long long>right(n-mid);
        for(int i=0;i<mid;i++){
            left[i]=nums[i];
        }
        for(int i=mid;i<n;i++){
            right[i-mid]=nums[i];
        }
        mergesort(left);
        mergesort(right);
        merge(left,right,nums);
    }
long long getInversions(long long *arr, int n){
    // Write your code here.
    vector<long long>nums(n);
    for(int i=0;i<n;i++){
        nums[i]=arr[i];
    }
    mergesort(nums);
    return gi;
}
