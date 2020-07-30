/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool getPath(TreeNode* A, int B, vector<int> &path){
    if(A == NULL)
        return 0;
    path.push_back(A->val);
    if(A->val == B)
        return 1;
    if(getPath(A->left, B, path) || getPath(A->right, B, path))
        return 1;
    path.pop_back();
    return 0;
    
} 
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> path;
    getPath(A,B,path);
    return path;
}

