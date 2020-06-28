int max_of(int a , int b, int c, int d, int e){
    return max(max(max(max(a,b),c), d), e);
}

vector<vector<int> > Solution::solve(int A, vector<vector<int> > &B) {
    int max_dist = A;
    int rows = B.size();
    int cols = B[0].size();
    
    vector<vector<int>> curr_dist = B;
    vector<vector<int>> next_dist = curr_dist;
    
    for(int dist = 0; dist <max_dist; dist++){
        for(int i = 0;i<rows; i++){
            for(int j = 0; j<cols; j++){
           
                int curr = curr_dist[i][j];
                int up = (i == 0) ? -1 : curr_dist[i-1][j];
                int down = (i==rows-1) ? -1 : curr_dist[i+1][j];
                int left = (j == 0) ? -1 : curr_dist[i][j-1];
                int right = (j==cols-1) ? -1 : curr_dist[i][j+1];
                
                next_dist[i][j] = max_of(curr, up, down, left, right);
            }
            
        }
        curr_dist = next_dist;
    }
    return curr_dist;
}
