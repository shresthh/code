/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode* root, int &B,int &ans){
    if(!root || !B){
        return;
    }
    inorder(root->left,B,ans);
    B--;
    if(B==0){
        ans=root->val;
        return;
    }
    if(B){
        inorder(root->right,B,ans);
    }
    
}
int Solution::kthsmallest(TreeNode* A, int B) {
    if(!A){
        return NULL;
    }
    int ans=0;
    inorder(A,B,ans);
    return ans;
}
