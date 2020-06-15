vector<vector<vector<int>>> dp;

int rec(int player, int start, int end, vector<int>&A){
    if(start>end){
        return 0;
    }
    if(dp[player][start][end]!=-1){
        return dp[player][start][end];
    }
    if(player==0){
        int ans  = (rec(1,start+1,end,A) + A[start]);
        ans = max(ans,(rec(1,start,end-1,A)+A[end]));
        return dp[player][start][end] = ans;
    }
    else{
        return dp[player][start][end] = min(rec(0,start+1,end,A), rec(0,start,end-1,A));
    }
    
}
int Solution::maxcoin(vector<int> &A) {
    int n=A.size();
    dp.clear();
    dp.resize(2,vector<vector<int>>(n,vector<int>(n,-1)));
    int ans = rec(0,0,n-1,A);
    return ans;
    
}
