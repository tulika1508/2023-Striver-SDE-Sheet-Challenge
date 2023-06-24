bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m=mat.size();
    int n=mat[0].size();
    int s=0,e=m*n-1;
    while(s<=e){
        int mid=(s+e)/2;
        int row=mid/n;
        int col=mid%n;
        if(mat[row][col]==target)
        return true;
        else if(mat[row][col]<target)
        s=mid+1;
        else
        e=mid-1;
    }
    return false;
}
