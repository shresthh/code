int static t[502][502];
bool ispalindrome(string A, int i , int j){
    if(i==j){
        return true;
    }
    if(i>j){
        return true;
    }
    while(i<=j){
        if(A[i]!=A[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;

}
int solve(string A, int i, int j){
    if(i>=j){
        return 0;
    }
    if(ispalindrome(A,i,j)==true){
        return 0;
    }

    
    int mn = INT_MAX;
    int temp = 0;
    for(int k = i; k<=j-1; k++){
        int left,right;
        if(t[i][k] != -1){
             left = t[i][k];
        }
        else{
            left = solve(A,i,k);
            t[i][k] = left;
        }
        if(t[k+1][j] != -1){
            right = t[k+1][j];
        }
        else{
            right = solve(A,k+1,j);
            t[k+1][j] = right;
        }

        temp = 1 + left + right;
        if(temp<mn){
            mn = temp;
        }
    }
    return mn;
}
int Solution::minCut(string A) {
    memset(t,-1,sizeof(t));
    int n=A.size();
    if(n==1){
        return 0;
    }
    return  solve(A,0,n-1);
}
