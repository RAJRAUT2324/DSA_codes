#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* create() {
    int val;
    cin >> val;

    if (val == -1)
        return NULL;

    Node* newNode = new Node(val);

    newNode->left = create();
    newNode->right = create();

    return newNode;
}

void levelOrder(Node* root)
{
    if(root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if(temp->left)
            q.push(temp->left);

        if(temp->right)
            q.push(temp->right);
    }
}

int main()
{
    cout << "Program Started\n";

    Node* root = create();

    cout << "Tree Created\n";

    levelOrder(root);

    cout << "\nDone\n";

    return 0;
}