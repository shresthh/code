/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* makeBST(const vector<int> &A,int s,int e){
    if(s==e){
        return new TreeNode(A[s]);
    }
    if(s<e){
    int mid= s +(e-s)/2;
    TreeNode *root = new TreeNode(A[mid]);
    root->left=makeBST(A,s,mid-1);
    root->right=makeBST(A,mid+1,e);
    return root;
    }
    else return NULL;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    return makeBST(A,0,A.size()-1);
}

