/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int >> ans;
    if(A==NULL){
        return ans;
    }
    stack<TreeNode*> stack1;
    stack<TreeNode*> stack2;
    vector<int> temp;
    TreeNode *root=A;
    stack1.push(root);
    //int level=0;
    while(!stack1.empty() || !stack2.empty()){
        while(!stack1.empty()){
            //vector<int> temp;
            root=stack1.top();
            int val=root->val;
            temp.push_back(val);
            if(root->left!=NULL){
                stack2.push(root->left);
            }
            if(root->right!=NULL){
                stack2.push(root->right);
            }
            stack1.pop();
        }
        if(!temp.empty()){
            ans.push_back(temp);
        }

        //ans.push_back(temp);
        temp.clear();
        
        while(!stack2.empty()){
            //vector<int> temp;
            root = stack2.top();
            int val=root->val;
            temp.push_back(val);
            if(root->right!=NULL){
                stack1.push(root->right);
            }
            if(root->left!=NULL){
                stack1.push(root->left);
            }
            stack2.pop();
            //temp.clear();
            
        }
        if(!temp.empty()){
            ans.push_back(temp);
        }
        
        temp.clear();
    }
    return ans;
}
