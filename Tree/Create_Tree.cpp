#include<iostream>
#include<limits.h>
#include<algorithm>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node *right;
    Node *left;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* createTree()
{   int val;
    cout<<"Enter value :";
    cin>>val;
    if(val==-1)
    {
        return NULL;
    }
    else{
        Node* newnode=new Node(val);
        newnode->left=createTree();
        newnode->right=createTree();
        return newnode;
    }

}

//pre order
void preorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//in order
void inorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//post order
void postorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelorder(Node* root)
{
    if(root == NULL)
        return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();

        if(front == NULL)
        {
            cout << endl;
            if(!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << front->data << " ";

            if(front->left != NULL)
                q.push(front->left);

            if(front->right != NULL)
                q.push(front->right);
        }
    }
}


int main()
{
    Node* root=createTree();
cout<<"pre : ";
preorder(root);

cout<<"post : ";
postorder(root);

cout<<"in : ";
inorder(root);
cout<<endl;

cout<<"This is level order :"<<endl;
levelorder(root);

}