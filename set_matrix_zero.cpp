void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int rows = A.size();
    int cols = A[0].size();
    bool row0 = false;
    bool col0 = false;
    for(int i =0 ; i< cols; i++){
        if(A[0][i] == 0)
            row0 = true;
    }
    
    for(int i = 0; i< rows; i++){
        if(A[i][0] == 0)
            col0 = true;
    }
    
    for(int i = 0; i< rows; i++){
        for (int j= 0; j< cols; j++){
            if(A[i][j] == 0){
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    
    for (int i = 1; i<rows; i++){
        for (int j = 1; j<cols; j++){
            if(A[i][0] == 0 || A[0][j] == 0){
                A[i][j] = 0;
            }
        }
    }
    if(row0){
        for(int i
 = 0; i< cols; i++){
            A[0][i] = 0;
        }
    }
    if(col0){
        for (int i = 0; i< rows; i++){
            A[i][0] = 0;
        }
    }
 
}
