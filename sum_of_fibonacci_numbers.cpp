int Solution::fibsum(int A) {
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(1);
    int ans = 0;
    
    for (int i = 2; fib[i-1] < A; i++){
        int val = fib[i-1] + fib[i-2];
        fib.push_back(val);
    }
    int size = fib.size()-1;
    
    while(A > 0){
        while(fib[size]>A)
            size--;
        A = A - fib[size];
        ans++;
    }
    return ans;
}

