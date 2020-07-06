int Solution::maxProduct(const vector<int> &A) {
    if(A.size() == 0){
        return -1;
    }
    int curr_min = A[0];
    int curr_max = A[0];
    int final_max = A[0];
    for (int i =1; i< A.size(); i++){
        int temp = curr_max;
        curr_max = max(max(curr_max*A[i], curr_min*A[i]), A[i]);
        curr_min  = min(min ( curr_min * A[i], temp*A[i]), A[i]);
        final_max = max(final_max, curr_max);
    }
    return final_max;
}
