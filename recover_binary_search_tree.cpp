/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::recoverTree(TreeNode* A) {
    stack<TreeNode*> stack;
    vector<int> ans;
    TreeNode *curr=A;
    TreeNode *prev=NULL,*first=NULL,*last=NULL;
    bool done=false;
    while(!done){
        if(curr!=NULL){
            stack.push(curr);
            curr=curr->left;
        }
        else{
            curr=stack.top();
            stack.pop();
            if(prev!=NULL){
                if(prev->val>curr->val){
                    if(first==NULL){
                        first=prev;
                    }
                    last=curr;
                }
            }
            
            prev=curr;
            curr=curr->right;

            
        }
        
        
        if(stack.empty() && curr==NULL){
            done =true;
        }
    }
    ans.push_back(first->val);
    ans.push_back(last->val);
    sort(ans.begin(),ans.end());
    return ans;
    
}

