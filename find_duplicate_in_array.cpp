int Solution::repeatedNumber(const vector<int> &A) {
    //[3 4 1 4 1]
    int x = 0;
    int y = A[0];
    for(int i = 1; i< A.size(); i++){
        x^=i;
        y^=A[i];
    }
    return x^y;
}

