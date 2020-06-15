int Solution::maxProfit(const vector<int> &A) {
    int n = A.size();
    if(n==0){
        return 0;
    }
    int ans = 0, price = A[0];
    for(int i = 1; i<n;i++){
        price = min(price, A[i]);
        ans = max(ans, A[i] - price);
    }
    return ans;
}

