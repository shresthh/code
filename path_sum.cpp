int sum(TreeNode *root , int B){
    if(root==NULL){
        return 0;
    }
    if(B-root->val==0 && root->left==NULL && root->right==NULL){
        return 1;
    }
    return (sum(root->left,B-root->val)|| sum(root->right,B-root->val));
}
int Solution::hasPathSum(TreeNode* A, int B) {
    
    return sum(A,B);
 
}

