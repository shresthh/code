int Area_of_histogram(vector<int> &dp){
    if(dp.size()==0)
        return 0;
    stack<int> s;
    int i =0;
    int mx = 0;
    while(i<dp.size()){
        if(s.empty() || dp[s.top()] <= dp[i]){
            s.push(i);
            i++;
        }
        else{
            int curr_max_index = s.top();
            s.pop();
            int area = 0;
            if(s.empty()){
                area = dp[curr_max_index] * i;
            }
            else{
                area = dp[curr_max_index] * (i-1-s.top());
            }
            mx = max(mx, area);
            
        }
        
    }
    while(!s.empty()){
        int curr_max_index = s.top();
        s.pop();
        int area = 0;
        if(s.empty()){
            area = dp[curr_max_index] * i;
        }
        else{
            area = dp[curr_max_index] * (i-1-s.top());
        }
        mx = max(mx, area);
        
    }
    return mx;
}
int Solution::maximalRectangle(vector<vector<int> > &A) {
    int cols = A[0].size();

    vector<int> dp(cols, 0);
    int mx = 0;
    for (int i = 0; i< A.size(); i++){
        for (int j= 0; j< A[i].size(); j++){
            if(A[i][j] == 0)
                dp[j] = 0;
            else
                dp[j] += 1;
        }
        int mx = max(mx, Area_of_histogram(dp));
    }
    return mx;
}
