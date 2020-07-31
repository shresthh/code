int Solution::isPower(int A) {
    if(A<=1)
        return 1;
  int  sqrtA = floor(sqrt(A));
    if(sqrtA*sqrtA == A)
        return 1;
    for (int i = 2; i<=sqrtA ; i++){
        unsigned int p = i;
        while(p<=A){
            p*=i;
            if(p == A)
                return 1;
        }
    }
    return 0;
}
