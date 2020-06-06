/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    stack<TreeNode*> s;
    vector<int> ans;
    if(A==NULL){
        return ans;
    }
    TreeNode *root=A;
    s.push(root);
    while(!s.empty()){
        root=s.top();
        ans.push_back(root->val);
        s.pop();
        if(root->right!=NULL){
            s.push(root->right);
        }
        if(root->left!=NULL){
            s.push(root->left);
        }
    }
    return ans;
}
