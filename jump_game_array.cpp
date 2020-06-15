int Solution::canJump(vector<int> &A) {
    int n = A.size();
    //if(A[0]==0){
      //  return 1;
    //}
    int reachable = 0;
    for (int i = 0;i<n;i++){
        if(reachable < i){
            return 0;
        }
        reachable = max(reachable, i+A[i]);
    }
    return 1;
}

