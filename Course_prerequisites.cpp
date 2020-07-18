void detect_cycle(int u, const vector<vector<int>> &adj, vector<bool> &visited, vector<bool> stack, int &res){
    visited[u] = true;
    stack[u] = true;
    
    for(auto i : adj[u]){
        if(!visited[i])
            detect_cycle(i, adj , visited, stack, res);
        else if(stack[i]){
            res = 0;
            return;
        }
    }
    stack[u] = false;
}
int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    int n = B.size();
    vector<vector<int>> adj(A+1);
    for(int i =0; i< n; i++){
        adj[B[i]].push_back(C[i]);
    }
    vector<bool> visited(A+1, false);
    vector<bool> stack(A+1, false);
    
    int res = 1;
    detect_cycle(1, adj, visited, stack, res);
    return res;
}
