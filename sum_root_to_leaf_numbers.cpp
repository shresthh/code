/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int sum(TreeNode *A , int value){
    if(A==NULL){
        return 0;
    }
    value=(((value)%1003*10)%1003 +(A->val)%1003)%1003;
    if(A->left==NULL && A->right==NULL){
        return value;
    }
    
    return (sum(A->left,value)%1003 + (sum(A->right,value)%1003))%1003;
} 
int Solution::sumNumbers(TreeNode* A) {
    return sum(A,0);
}
