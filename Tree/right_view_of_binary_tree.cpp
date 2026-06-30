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
  void solve(Node* root ,vector<int>&arr,int level)
  {
      if(root==NULL) return;
      if(level==arr.size())
      {
          arr.push_back(root->data);
      }
      
      if(root->right)
      {
          solve(root->right,arr,level+1);
      }
         if(root->left)
      {
          solve(root->left,arr,level+1);
      }
      
  }
  
    vector<int> rightView(Node *root) {
         vector<int>arr;
        if(root==NULL) return arr;
        solve(root,arr,0);
        return arr;
        
    }
};
