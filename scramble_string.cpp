unordered_map<string , bool> mp;
bool solve(string A, string B){
    if(A.compare(B)==0){
        return true;
    }
    if(A.size() <= 1){
        return false;
    }
    string key = A;
    key.push_back('_');
    key.append(B);
    if(mp.find(key) != mp.end()){
        return mp[key];
    }
    int n = A.size();
    bool flag = false;
    for(int i = 1; i<n; i++){
        if((solve(A.substr(0,i),B.substr(0,i)) && solve(A.substr(i), B.substr(i))) || (solve(A.substr(0,i),B.substr(n-i,i))&& solve(A.substr(i,n-i), B.substr(0,n-i)))){
            flag = true;
            break;
        } 
    }
    return mp[key] = flag;
}
int Solution::isScramble(const string A, const string B) {
    mp.clear();
    if (A.size() != B.size()){
        return false;
    }
    if(A.size() == 0 && B.size() == 0){
        return true;
    }
    return solve(A,B);
    

}
