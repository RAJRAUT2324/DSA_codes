class Info {
public:
    int minVal, maxVal, sum;
    bool isBST;
};

class Solution {
public:
    Info solve(TreeNode* root, int& sum) {
        if(!root) return {INT_MAX, INT_MIN, 0, true};
        
        Info left = solve(root->left, sum);
        Info right = solve(root->right, sum);
        
        if(root->val > left.maxVal && root->val < right.minVal && left.isBST && right.isBST) {
            Info current = {min(root->val, left.minVal), max(root->val, right.maxVal), root->val + left.sum + right.sum, true};
            sum = max(sum, current.sum);
            return current;
        }
        return {0, 0, 0, false};
    }
    
    int maxSumBST(TreeNode* root) {
        int sum = 0;
        solve(root, sum);
        return sum;
    }
};