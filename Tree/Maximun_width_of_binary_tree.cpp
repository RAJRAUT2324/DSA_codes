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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,1});
        int maxWidth=0;

        while(!q.empty())
        {
            int size=q.size();
            auto l=q.front().second;
            auto r=q.back().second;

            maxWidth=max(maxWidth,(int)(r-l+1));
            for(int i=0;i<size;i++)
            {
                auto front=q.front();
                q.pop();
                auto f=front.first;
                auto idx=front.second;
                if(f->left) q.push({f->left,2*idx});
                if(f->right) q.push({f->right,(2*idx)+1});
            }
        }
        return maxWidth;
    }
};