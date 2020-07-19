int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int c1 =0, c2 = 0, x1 = -1, x2 = -1;
    for (auto x : A){
        if(x1 == x) c1++;
        else if(x2 == x) c2++;
        else if(c1 ==0) c1++, x1 = x;
        else if(c2 == 0) c2++, x2 = x;
        else c1--, c2--;
    }
    c1 =0,  c2 = 0;
    for (auto x : A){
        if(x == x1) c1++;
        else if(x == x2) c2++;
    }
    int n = A.size();
    return c1 > n/3 ? x1 : c2 > n/3 ? x2 : -1;
}
