/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int issymmetry(TreeNode* A, TreeNode* B ){
     if(A==NULL && B==NULL) return 1;
     if(A==NULL || B==NULL) return 0;
     return (A->val==B->val)&&issymmetry(A->left,B->right)&&issymmetry(A->right,B->left);
     
 }
int Solution::isSymmetric(TreeNode* A) {
    TreeNode *B=A;
    return (issymmetry(A,B));

}

