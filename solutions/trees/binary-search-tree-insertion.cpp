// https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem?isFullScreen=true

Node * insert(Node * root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }
    insertHelper(root, data);
    return root;
}

void insertHelper(Node *&root, const int &data) {
    if (root == nullptr) {
        root = new Node(data);
    } else if (root->data < data) {
        insertHelper(root->right, data);
    } else {
        insertHelper(root->left, data);
    }
}