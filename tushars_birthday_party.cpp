int Solution::solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    vector<int> A1 = A;
    vector<int> B1 = B;
    vector<int> C1 = C;
    sort(A1.begin(), A1.end());
    int n = B1.size();
    int w = A1[A.size()-1];
    int t[n+1][w+1];
    int sum = 0;
    
    for(int i = 0; i<n+1;i++){
        t[i][0] = 0;
    }
    for(int j = 0; j<w+1;j++){
        t[0][j] = INT_MAX/2;
    }
    for(int i = 1; i<n+1; i++){
        for(int j = 1; j<w+1; j++){
            if(B1[i-1]<=j){
                t[i][j] = min(C1[i-1] + t[i][j-B1[i-1]], t[i-1][j]);
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }
    for(int i = 0; i< A1.size(); i++){
        sum += t[n][A1[i]];
    }
    return sum;
}

