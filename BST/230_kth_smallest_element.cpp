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
void inorder_arr(TreeNode* root,vector<int>&arr)
{
    if(root==NULL)
    {
        return;
    }
    inorder_arr(root->left,arr);
    arr.push_back(root->val);
    inorder_arr(root->right,arr);
}
    int kthSmallest(TreeNode* root, int k) {
     if(root==NULL)
     {
        return -1;
     }   
     vector<int>arr;
     inorder_arr(root,arr);

     int ans=-1;
     for(int i=0;i<k;i++)
     {
       ans=arr[i];
     }
     return ans;
    }
};