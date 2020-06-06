/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void invert(TreeNode *curr){
    if(!curr){
        return;
    }
    invert(curr->left);
    invert(curr->right);
    
    TreeNode *temp=curr->left;
    curr->left=curr->right;
    curr->right=temp;
}
TreeNode* Solution::invertTree(TreeNode* A) {
    invert(A);
    return A;
}

