unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    unsigned int res = 0;
    int bit;
    for (int i = 0; i<32 ; i++){
        bit = (A>>i) & 1;
        res = (res<<1) | bit;
     }
     return res;
}
