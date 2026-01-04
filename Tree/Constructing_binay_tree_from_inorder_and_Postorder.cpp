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
int get(vector<int>& inorder,int element)
{
    for(int i=inorder.size()-1;i>=0;i--)
    {
        if(inorder[i]==element)
        {
            return i;
        }
    }
    return -1;
}
TreeNode* createTree(vector<int>& inorder, vector<int>& postorder,int ins,int ine,int &postIndex)
{
    if(ins>ine || postIndex<0)
    {
        return NULL;
    }
    int element=postorder[postIndex];
    postIndex--;
    TreeNode* root=new TreeNode(element);
    int i=get(inorder,element);
    root->right=createTree(inorder,postorder,i+1,ine,postIndex);
    root->left=createTree(inorder,postorder,ins,i-1,postIndex);
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int ins=0;
        int postIndex=postorder.size()-1;
        int ine=inorder.size()-1;
        TreeNode* root=createTree(inorder,postorder,ins,ine,postIndex);
        return root;
    }
};
Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and postorder is the postorder traversal of the same tree, construct and return the binary tree.

 

Example 1:


Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]
Example 2:

Input: inorder = [-1], postorder = [-1]
Output: [-1]