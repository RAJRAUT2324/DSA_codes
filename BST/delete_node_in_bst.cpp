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
int getMax(TreeNode* root) {
    if(root == NULL) return -1;
    while(root->right != NULL) {
        root = root->right;
    }
    return root->val;
}
   TreeNode* deleteNode(TreeNode* root, int key) {
    if(root == NULL) return NULL;
    if(root->val == key) {
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        if(root->left != NULL && root->right == NULL) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        int replaceValue = getMax(root->left);
        root->val = replaceValue;
        root->left = deleteNode(root->left, replaceValue);
        return root;
    }
    if(key > root->val) root->right = deleteNode(root->right, key);
    else root->left = deleteNode(root->left, key);
    return root;
}
};