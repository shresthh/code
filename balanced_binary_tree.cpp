int getHeight(TreeNode* node){
    return (node)?max(getHeight(node->left),getHeight(node->right))+1:0;
}
int Solution::isBalanced(TreeNode* A) {
    return (A)?(abs(getHeight(A->left)-getHeight(A->right))<=1 && isBalanced(A->left) && isBalanced(A->right)):1;
}
