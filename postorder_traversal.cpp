/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ans;
    if(A==NULL){
        return ans;
    }
    //vector<int> ans;
    stack<TreeNode*> s1;
    stack<TreeNode*> s2;
    TreeNode *root=A;
    s1.push(root);
    while(!s1.empty()){
        root=s1.top();
        s1.pop();
        s2.push(root);
        if(root->left!=NULL){
            s1.push(root->left);
        }
        if(root->right!=NULL){
            s1.push(root->right);
        }
            
        
    }
    while(!s2.empty()){
        root=s2.top();
        int val=root->val;
        ans.push_back(val);
        s2.pop();
    }
    return ans;
    
}
