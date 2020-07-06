unordered_map<string, int> mp;
int solve(string s, int i, int j, bool istrue ){
    if(i>j)
        return false;
    if(i==j){
        if(istrue == true)
            return s[i] == 'T';
        else
            return s[i] == 'F';
    }
    string temp = to_string(i);
    temp.push_back(' ');
    temp.append(to_string(j));
    temp.push_back(' ');
    temp.append(to_string(istrue));
    if(mp.find(temp) != mp.end())
        return mp[temp];
    int ans = 0;
    for(int k = i+1; k <= j-1; k+=2){
        int lt = solve(s, i, k-1, true);
        int lf = solve(s, i, k-1, false);
        int rt = solve(s, k+1, j, true);
        int rf = solve(s, k+1, j, false);

        if(s[k] == '&'){
            if(istrue == true)
                ans =ans + lt*rt;
            else
                ans = ans + lt*rf + lf*rt + lf*rf;
        }

        else if(s[k] == '|'){
            if(istrue == true)
                ans = ans + lt*rt + lt*rf + lf*rt;
            else
                ans = ans + lf*rf;
        }
        else if(s[k] == '^'){
            if(istrue == true)
                ans = ans + lt*rf + lf*rt;
            else
                ans = ans + lf*rf + lt*rt;
        }
 
    }
    ans  = ans % 1003;
    return mp[temp] = ans;
}
int Solution::cnttrue(string A) {
    mp.clear();
    return solve(A, 0, A.size()-1, true);
}
