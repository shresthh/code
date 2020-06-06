 TreeNode* build(vector<int> &A, int s, int e){
     if(s>e){
         return NULL;
     }
     int max=-1,idx;
     for(int i=s;i<=e;i++){
         if(max<A[i]){
             max=A[i];
             idx=i;
         }
     }     
         TreeNode *root= new TreeNode(A[idx]);
         root->left=build(A,s,idx-1);
         root->right=build(A,idx+1,e);
         return root;
     
 }
TreeNode* Solution::buildTree(vector<int> &A) {
    return build(A,0,A.size()-1);
    
}
