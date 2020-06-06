/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* fun(vector<int> &A,vector<int> &post,int st,int en,int &j)
{
int ind;
if(st>en)
return NULL;
for(int i=st;i<=en;i++)
if(A[i]==post[j])
{
ind=i;
break;
}
TreeNode* ptr=new TreeNode(A[ind]);
j--;
ptr->right=fun(A,post,ind+1,en,j);
ptr->left=fun(A,post,st,ind-1,j);
return ptr;
}

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B)
{
int j=B.size()-1;
return fun(A,B,0,A.size()-1,j);
}
