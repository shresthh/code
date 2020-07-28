int Solution::cpFact(int A, int B) {
    int x;
    while (__gcd(A,B) != 1)
        A = A/__gcd(A,B);
    return A;
}
