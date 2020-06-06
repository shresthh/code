/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int search(vector<int> &inorder, int val,int s,int e){
    for(int i =s; i<=e;i++){
        if(inorder[i]==val){
            return i;
    }
    return -1;
}
    
}
TreeNode* build(vector<int> &preorder,vector<int> &inorder, int s,int e,int &preidx){
    if(s>e){
        return NULL;
    }
    TreeNode *root=new TreeNode(preorder[preidx]);
    preidx++;
    if(s==e){
        return root;
    }
    int idx=search(inorder,root->val,s,e);
    root->left=build(preorder,inorder,s,idx-1,preidx);
    root->right=build(preorder,inorder,idx+1,e,preidx);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int pre = 0;
    return build(A,B,0,A.size()-1,pre);
}

