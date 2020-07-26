vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n = A.size();
    vector<vector<int>> ans;
    for (int i = 0; i<n; i++){
        int col = i;
        int row = 0;
        vector<int> temp;
        while (col >= 0){
            temp.push_back(A[row][col]);
            col--;
            row++;
        }
        ans.push_back(temp);
    }
    for(int i = 1; i< n; i++){
        int row = i;
        int col = n-1;
        vector<int> temp;
        while(row<n){
            temp.push_back(A[row][col]);
            row++;
            col--;
        }
        ans.push_back(temp);
    }
    return ans;
}


