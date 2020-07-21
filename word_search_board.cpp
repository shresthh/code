bool search(vector<string> &A, string &B, int i, int j, int idx, vector<vector<bool>> &visited){
    if(idx == B.size()-1) return true;
    visited[i][j] = true;
    if(i>0 && A[i-1][j] == B[idx+1] && search(A,B, i-1, j, idx+1, visited)) return true;
    if(j>0 && A[i][j-1] == B[idx+1] && search(A,B, i, j-1, idx+1, visited)) return true;
    if(i<A.size()-1 && A[i+1][j] == B[idx+1] && search(A,B, i+1, j, idx+1, visited)) return true;
    if(j<A[0].size()-1 && A[i][j+1] == B[idx+1] && search(A,B, i, j+1, idx+1, visited)) return true;
    
    visited[i][j] = false;
    return false;
}
int Solution::exist(vector<string> &A, string B) {
    int r = A.size(), c = A[0].size();
    vector<vector<bool>> visited(r, vector<bool>(c, false));
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(A[i][j] == B[0] && search(A, B, i, j, 0, visited)) return 1;
        } 
    }
    return 0;
    
}
