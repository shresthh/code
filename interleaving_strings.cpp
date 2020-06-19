int Solution::isInterleave(string A, string B, string C) {
    int rows = A.size();
    int cols = B.size();
    int n = C.size();
    if(n!= (rows + cols)){
        return 0;
    }
    int t[rows+1][cols+1];
    for (int i=0;i<=rows;i++){
        for (int j=0;j<=cols;j++){
            if(i==0 && j==0){
                t[i][j]=1;
            }
            else if(i==0){
                t[i][j] = (t[i][j-1] && B[j-1] == C[i+j-1]);
            }
            else if(j==0){
                t[i][j] = (t[i-1][j] && A[i-1] == C[i+j-1]);
            }
            else{
                t[i][j] = ((t[i][j-1] && B[j-1] == C[i+j-1]) || (t[i-1][j] && A[i-1] == C[i+j-1]));
            }
        }
    }
    return t[rows][cols];
}

