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

 //Simple aproach
 /* The Node structure is
class Node {
public:
    int data;
    Node* left;
    Node* right;

};
}; */

class Solution {
public:
    int maxDepth(Node* root) {
   queue<Node*>q;
   if(root==NULL) return 0;
   q.push(root);
   q.push(NULL);
   int count=0;
   while(!q.empty())
   {
     auto temp=q.front();
     q.pop();
     if(temp==NULL && q.empty())
     {
        break;
     }
     else if(temp==NULL && !q.empty())
     {
        count=count+1;
        q.push(NULL);
     }
     else
     {
        if(temp->left)
        {
             q.push(temp->left);
        }
       if(temp->right)
       {
         q.push(temp->right);
       }
       
     }
   }
   return count+1;
    }
};




///@ optimized 


class Solution {
public:
    int maxDepth(TreeNode* root) {
        //base case
        if(root==NULL)
        {
            return 0;
        }
        int lefth=maxDepth(root->left)+1;
        int righth=maxDepth(root->right)+1;

        int ans=max(lefth,righth);
        return ans;
    }
};
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.