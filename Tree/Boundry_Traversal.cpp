/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  void leftB(Node* root ,vector<int>&arr)
  {
      if(root==NULL) return;
      if(root->left==NULL && root->right==NULL)
      {
          return;
      }
      arr.push_back(root->data);
      if(root->left!=NULL)
      {
          leftB(root->left,arr);
      }
      else
      {
          leftB(root->right,arr);
      }
  }
  
  void l(Node*root,vector<int>&arr)
  {
      if(root==NULL) return;
      if(root->left==NULL && root->right==NULL)
      {
          arr.push_back(root->data);
      }
      l(root->left,arr);
      l(root->right,arr);
  }
  
  void rightB(Node* root ,vector<int>&arr)
  {
      if(root==NULL) return;
      if(root->left==NULL && root->right==NULL)
      {
          return;
      }
      if(root->right!=NULL)
      {
          rightB(root->right,arr);
      }
      else
      {
          rightB(root->left,arr);
      }
      //because we wants the reverse order of right boundry elements
      arr.push_back(root->data);
  }
    vector<int> boundaryTraversal(Node *root) {
        vector<int>arr;
        if(root==NULL) 
        {
            return arr;
        }
        else
        {
            arr.push_back(root->data);
        }
        //left boundy
        leftB(root->left,arr);
        //leaf_l
        l(root->left,arr);
        //leaf_r
        l(root->right,arr);
        //right boundry
        rightB(root->right,arr);
        return arr;
    }
};