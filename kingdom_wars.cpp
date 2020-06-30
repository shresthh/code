int Solution::solve(vector<vector<int> > &A) {
    int rows  = A.size();
    int cols = A[0].size();
    int mx = INT_MIN;
    for(int i = rows-1;i>=0;i--){
        for(int j = cols-1; j>=0;j--){
            if(i<rows-1) A[i][j] += A[i+1][j];
            if(j<cols-1) A[i][j] += A[i][j+1];
            if(i<rows-1 && j<cols-1) A[i][j] -= A[i+1][j+1];
            mx = max(mx, A[i][j]);
        }
    }
    return mx;
}

