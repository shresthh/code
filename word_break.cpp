vector<int> dp;
unordered_set<string> dict;
int Solution::wordBreak(string A, vector<string> &B) {
    dp.clear();
    dict.clear();
    int n = A.size();
    dp.resize(n+1,0);
    for (auto it : B){
        dict.insert(it);
    }
    dp[n] = 1;
    for(int i =n-1;i>=0;i--){
        string temp = "";
        for(int j = i; j<n;j++){
            
            if(dp[i]){
                break;
            }
            temp += A[j];
            if(dict.find(temp)!= dict.end()){
                dp[i] = dp[j+1];
                
            }
            
        }
    }
    return dp[0];
}
