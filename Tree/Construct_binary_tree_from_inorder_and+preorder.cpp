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
int get(int target,vector<int>arr)
{
    for(int i=0;i<arr.size();i++)
    {
        if(target==arr[i])
        {
            return i;
        }
    }
    return -1;
}
TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int& preIndex,int inStart,int inEnd)
{
    if(preIndex>=preorder.size())
    {
        return NULL;
    }
    if(inStart>inEnd)
    {
        return NULL;
    }
    //pre
    int element=preorder[preIndex];
    preIndex++;

    int inElement=get(element,inorder);
    TreeNode* root=new TreeNode(element);

    root->left=solve(preorder,inorder,preIndex,inStart,inElement-1);
    root->right=solve(preorder,inorder,preIndex,inElement+1,inEnd);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex=0;
        int inStart=0;
        int inEnd=inorder.size()-1;
        TreeNode* root=solve(preorder,inorder,preIndex,inStart,inEnd);
        return root;

    }
};