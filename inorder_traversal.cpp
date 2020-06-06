/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> s;
    TreeNode *curr=A;
    bool done =0;
    while(!done){
        if(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        else{
            if(!s.empty()){
                curr=s.top();
                int val=curr->val;
                ans.push_back(val);
                curr=curr->right;
                s.pop();
            }
            else{
                done=1;
            }
        }
        
    }
    return ans;

}
