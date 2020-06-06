/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void getsum(TreeNode* A, vector<int> temp, vector<vector<int>> &ans, int B,int sum){
    if(A==NULL){
        return;
    }
    sum+=A->val;
    temp.push_back(A->val);
    if(A->left==NULL && A->right==NULL){
        if(sum==B){
            ans.push_back(temp);
        }
        return;
    }
    getsum(A->left,temp,ans,B,sum);
    getsum(A->right,temp,ans,B,sum);
    return;
} 
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> ans;
    vector<int> temp;
    getsum(A,temp,ans,B,0);
    return ans;
}
