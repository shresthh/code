/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    stack<TreeNode*> stack;
    stack.push(A);
    TreeNode *curr;
    while(!stack.empty()){
        curr=stack.top();
        stack.pop();
        if(curr->right!=NULL)
        {
            stack.push(curr->right);
    
        }
        if(curr->left!=NULL){
            stack.push(curr->left);
        }
        if(!stack.empty()){
            curr->right=stack.top();
        }
        curr->left=NULL;
        
    }
    return A;
}
