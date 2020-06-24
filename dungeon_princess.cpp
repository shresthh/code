int Solution::calculateMinimumHP(vector<vector<int> > &A) {
    int r = A.size();
    int c = A[0].size();
    vector<vector<int>> t(r, vector<int>(c));
    for(int i=r-1;i>=0;i--){
        for(int j=c-1;j>=0;j--){
            if(i==r-1 && j==c-1){
                t[i][j] = min(0, A[i][j]);
            }
            else if (i==r-1){
                t[i][j] = min(0, A[i][j]+t[i][j+1]);
            }
            else if(j==c-1){
                t[i][j] = min(0, A[i][j] + t[i+1][j]);
            }
            else {
                t[i][j] = min(0, A[i][j]+ max(t[i+1][j],t[i][j+1]));
            }
        }
    }
    return abs(t[0][0])+1;
}

