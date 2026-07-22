/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
 bool heapOrNot(Node* root){
    if(root==NULL)
    {
        return true;
    }

    bool l=heapOrNot(root->left);
    bool r=heapOrNot(root->right);

    bool lcheck=true;
    bool rcheck=true;

    if(root->left && root->left->data > root->data)
    {
        lcheck=false;
    }

    if(root->right && root->right->data > root->data)
    {
        rcheck=false;
    }

    return l && r && lcheck && rcheck;
}
  
   bool isCompleteTree(Node* root) {
        queue<Node*> q;
        q.push(root);

        bool nullFound = false;

        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();

            if (curr == NULL) {
                nullFound = true;
            } 
            else {
                if (nullFound) {
                return false;;
                   
                }
               
                q.push(curr->left);
                q.push(curr->right);
            }
        }

        return true;
    }
    bool isHeap(Node* tree) {
        bool ans= isCompleteTree(tree);
        bool ans2=heapOrNot(tree);
        return ans && ans2;
       
    }
};