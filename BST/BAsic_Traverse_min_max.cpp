class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* buildBST(Node* root, int value) {
    if(root == NULL) {
        root = new Node(value);
        return root;
    }
    if(value > root->data) {
        root->right = buildBST(root->right, value);
    }
    else {
        root->left = buildBST(root->left, value);
    }
    return root;
}Node* createBST(Node* root) {
    std::cout << "Enter the value for the node:" << std::endl;    
    int val;
    std::cin >> val;
    while(val != -1) {
        root = buildBST(root, val);
        std::cout << "Enter the value for the node:" << std::endl;
        std::cin >> val;
    }
    return root;
}

///traveerse
void levelorderTraversal(Node* root) {
    std::queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* front = q.front();
        q.pop();
        if(front == NULL) {
            std::cout << std::endl;
            if(!q.empty()) {
                q.push(NULL);
            }    
        }
        else {
            std::cout << front->data << " ";
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
    }
}

//min
int getMin(Node* root) {
    if(root == NULL) return -1;
    while(root->left != NULL) {
        root = root->left;
    }
    return root->data;
}


//search
bool searchBST(Node* root, int target) {
    if(root == NULL) return false;
    if(root->data == target) return true;
    else if(target > root->data) return searchBST(root->right, target);
    else return searchBST(root->left, target);
}