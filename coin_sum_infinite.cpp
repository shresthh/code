int Solution::coinchange2(vector<int> &A, int B) {
    const int mod = 1000007;
    vector<int> dp(B+1);
    dp[0] = 1;
    for (int i = 0; i< A.size(); i++){
        for(int j = A[i]; j<=B; j++){
            dp[j] += dp[j - A[i]];
            dp[j] %= mod;
        }
    }
    return dp[B];
}

