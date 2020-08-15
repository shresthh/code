void dfs(vector<vector<char>> &A, int i , int j){
    if(A[i][j] == 'O'){
        A[i][j] = '1';
        
        if(i>0) dfs(A, i-1, j);
        if(i< A.size()-1) dfs(A, i+1, j);
        if(j>0) dfs(A, i, j-1);
        if(j < A[i].size()-1) dfs(A, i, j+1);
        
    }
}
void Solution::solve(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int rows = A.size();
    if(rows == 0)
        return;
    int cols = A[0].size();

    for(int i = 0; i< rows; i++){
        dfs(A, i , 0);
        dfs(A, i, cols-1);
    }
    for(int i = 0; i< cols; i++){
        dfs(A, 0, i);
        dfs(A, rows-1, i);
    }
    
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(A[i][j] == '1')
                A[i][j] = 'O';
            else if(A[i][j] == 'O')
                A[i][j] = 'X';
        }
    }
    
    
}
