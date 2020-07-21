int Solution::maximumGap(const vector<int> &A) {
    int ans = -1, i = 0, j = 0, n = A.size();
    vector<int> Lmin(n), Rmax(n);
    Lmin[0] = A[0], Rmax[n-1] = A[n-1];
    if(A.size() >= 1){
        for(int i = 1; i< n; i++){
            Lmin[i] = min(Lmin[i-1], A[i]);
            Rmax[n-i-1] = max(Rmax[n-i], A[n-i-1]);
        }
        while(i<n && j<n){
            if(Lmin[i]>Rmax[j]){
                i++;
            }
            else
                ans = max(ans, j-i);
                j++;
        }
    }
    return ans;
}
