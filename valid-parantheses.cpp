int Solution::longestValidParentheses(string A) {
    int sol = 0;
    stack<int> s;
    int i = 0;
    s.push(-1);
    while(i<A.size()){
        if(A[i] == '('){
            s.push(i);
        }
        else{
            s.pop();
            if(!s.empty()){
                sol = max(sol, i-s.top());
            }
            else{
                s.push(i);
            }
        }
        i++;
    }
    return sol;
}
