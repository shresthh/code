int Solution::anytwo(string A) {
    int n=A.size();
    int t[n+1][n+1];
    for(int i = 0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            t[i][0]=0;
            t[0][i]=0;
        }
    }
    for (int i = 1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(A[i-1]==A[j-1] && i!=j){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
        
    }
    if(t[n][n] >=2){
        return 1;
    }
    else{
        return 0;
    }
}
