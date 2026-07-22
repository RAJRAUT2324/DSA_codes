/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void solve(TreeNode* root,vector<int>&arr)
{
if(root==NULL)
{
    return;
}
solve(root->left,arr);
arr.push_back(root->val);
solve(root->right,arr);
}
void bst(TreeNode* root,vector<int>arr,int &i)
{
    if(root==NULL)
    {
        return;
    }
    bst(root->left,arr,i);
    if(root!=NULL)
    {
        root->val=arr[i];
        i++;
    }
    bst(root->right,arr,i);
}
    void recoverTree(TreeNode* root) {
        int i=0;
        vector<int>arr;
        solve(root,arr);
        sort(arr.begin(),arr.end());
        bst(root,arr,i);
    }
};