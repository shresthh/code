/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode *curr=NULL;
 stack<TreeNode*> s;

BSTIterator::BSTIterator(TreeNode *root) {
    while(!s.empty()){
        s.pop();
    }
    curr=root;
    while(curr!=NULL){
        s.push(curr);
        curr=curr->left;
    }
    
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(s.empty()){
        return false;
    }
    return true;
    

}

/** @return the next smallest number */

