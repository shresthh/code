int binomial(int A, int k){
    if(k==0 || k==A) return 1;
    if(k>A-k) k=A-k;
    int ans = 1;
    for (int i =0; i< k; i++){
        ans *= A-i;
        ans /= i+1;
    }
    return ans;
}
vector<int> Solution::getRow(int A) {
    vector<int> ans;
    for (int i=0; i<=A; i++){
        ans.push_back(binomial(A, i));
    }
    return ans;
}
