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
void solve(TreeNode* &pre , TreeNode*root , int &ans)
{
    if(root==NULL) return;
    solve(pre,root->left,ans);

    if(pre)
    {
        ans=min(ans,root->val-pre->val);
    }
    pre=root;
    solve(pre,root->right,ans);
}
    int minDiffInBST(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int ans=INT_MAX;
        TreeNode* pre=0;
        solve(pre,root,ans);
        return ans;
    }
};