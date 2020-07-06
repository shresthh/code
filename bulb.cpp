int Solution::bulbs(vector<int> &A) {
    int state =0; 
    int count = 0;
    for (int i =0; i < A.size(); i++){
        if(A[i] == state){
            count++;
            state = 1 - state;
        }
    }
    return count;
}

