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

int getheight(TreeNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftl=getheight(root->left);
    int rightl=getheight(root->right);
    int ans=max(leftl,rightl)+1;
    return ans;
}
    bool isBalanced(TreeNode* root) {
        //base case 
        if(root==NULL)
        {
            return true;//empty tree alwayas balanced
        }
        int lleft=getheight(root->left);
        int rleft=getheight(root->right);
        int ans=abs(lleft-rleft);
        if(ans>1)
        {
            return false;
        }
        else
        {
            bool lefth=isBalanced(root->left);
            bool righth=isBalanced(root->right);
            if(lefth==true && righth==true)
            {
                return true;
            }
        }
        return false;
    }
};Given a binary tree, determine if it is height-balanced.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: true
Example 2: