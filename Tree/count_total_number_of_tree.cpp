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
void preorder(TreeNode*root,int& count)
{
    if(root==NULL) return;
    count=count+1;
    preorder(root->left,count);
    preorder(root->right,count);
}
    int countNodes(TreeNode* root) {
      int count=0;
      preorder(root,count);
      return count;  
    }
};

// this was logn or log n squre less than the o(n);
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 
 //Writing code in less than the O(n) i log or log(n2)
 * };
 */
class Solution {
public:
int lh(TreeNode* root)
{
    if(root==NULL) return 0;
    int h=0;
    while(root!=NULL)
    {
        h++;
        root=root->left;
        
    }
    return h;
}
int rh(TreeNode* root)
{
    if(root==NULL) return 0;
    int h=0;
    while(root!=NULL)
    {
        h++;
        root=root->right;
      
    }
    return h;
}
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int l=lh(root);
        int r=rh(root);

        if(l==r)
        {
            return(1<<l)-1; //it is a methos to do 2 ress to the power anything
        }

        int lc=countNodes(root->left);
        int rc=countNodes(root->right);

        return lc+rc+1;
    }
};