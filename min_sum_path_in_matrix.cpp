int Solution::minPathSum(vector<vector<int> > &A) {
    int rows = A.size();
    int cols = A[0].size();
    
    vector<vector<int>> dp(rows, vector<int>(cols));
    
    int sum = 0;
    for(int i = 0; i<rows; i++){
        dp[i][0] = sum + A[i][0];
        sum = dp[i][0];
    }
    
    sum  = 0;
    for(int i =0;i<cols;i++ ){
        dp[0][i] = sum + A[0][i];
        sum = dp[0][i];
    }
    for (int i = 1; i< rows; i++){
        for (int j = 1; j< cols; j++){
            dp[i][j] = A[i][j] + min(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[rows-1][cols-1];
}
