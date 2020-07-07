int Solution::maxp3(vector<int> &A) {
    long n = A.size();
    sort(A.begin(), A.end());
    long long int allPositives = A[n-1] * A[n-2] * A[n-3];
    long long int twoNegatives = A[n-1] * A[0] * A[1];
    return max(allPositives, twoNegatives);
}

