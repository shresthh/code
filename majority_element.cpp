int Solution::majorityElement(const vector<int> &A) {
    vector<int> B = A;
    sort(B.begin(), B.end());
    return B[B.size()/ 2];
}

