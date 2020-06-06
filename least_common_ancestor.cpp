 TreeNode *search(TreeNode *A, int B){
     if(!A){
         return NULL;
     }
     if(A->val==B){
         return A;
     }
     TreeNode *left=search(A->left,B);
     TreeNode *right=search(A->right,B);
     return (left)?left:right;
 }
 TreeNode *rec(TreeNode *A, int B, int C){
    if(A==NULL){
        return NULL;
    } 
    if(A->val==B || A->val==C){
        return A;
    }
    TreeNode *left=rec(A->left,B,C);
    TreeNode *right=rec(A->right,B,C);
    
    if(left !=NULL && right!=NULL){
        return A;
    }
    if(left==NULL && right ==NULL){
        return NULL;
    }
    return left!=NULL?left:right;
 }
 
int Solution::lca(TreeNode* A, int B, int C) {
    TreeNode *p=search(A,B), *q=search(A,C);
    if(!p || !q){
        return -1;
    }
    return rec(A,B,C)->val;
}
