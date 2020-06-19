int Solution::minDistance(string A, string B) {
    int rows = A.size();
    int cols = B.size();
    vector<vector<int >> t(rows+1, vector<int>(cols+1));
    for(int i=0;i<t[0].size();i++){
        t[0][i] = i;
    }
    for(int i=0;i<t.size();i++){
        t[i][0] = i;
    }
    for(int i = 1;i<t.size();i++){
        for(int j = 1;j<t[0].size();j++){
            if(A[i-1] == B[j-1]){
                t[i][j] = t[i-1][j-1];
            }
            else{
                t[i][j]= 1 + std :: min({t[i-1][j-1], t[i-1][j], t[i][j-1]});
            }
        }
    }
    return t[rows][cols];
}

