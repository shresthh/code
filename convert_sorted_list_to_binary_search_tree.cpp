/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
TreeNode *rec(vector<int> &v, int low, int high){
    if(low>high){
        return NULL;
    }
    int mid = low + (high-low)/2;
    TreeNode *root = new TreeNode(v[mid]);
    root->left = rec(v, low, mid-1);
    root->right = rec(v, mid+1, high);
    return root;
}
 
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int> v;
    while(A){
        v.push_back(A->val);
        A = A->next;
    }
    int n = v.size();
    return rec(v, 0 , n -1);
}
