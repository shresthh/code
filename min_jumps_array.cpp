int Solution::jump(vector<int> &A) {
    int n = A.size();
    int i = 0, end = 0, step = 0, maxend = 0;
    while(end< n-1){
        step++;
        for(; i<=end;i++){
            maxend = max(maxend, i+A[i]);
            if(maxend >= n-1){
                return step;
            }
        }
        if(end == maxend) break;
        end = maxend;
    }
    return n==1? 0:-1;
}

