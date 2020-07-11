/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void rec(TreeNode *root, vector<vector<int>> &ans, int depth){
     if(!root)
         return;
     if(ans.size() == depth){
         ans.push_back(vector<int> ());
     }
     ans[depth].push_back(root->val);
     rec(root->left, ans, depth+1);
     rec(root->right, ans, depth+1);
 }
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> ans;
    rec(A, ans, 0);
    return ans;
}
