// https://www.hackerrank.com/challenges/tree-level-order-traversal/problem?isFullScreen=true

int height(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

void printHeight(Node* root, int height) {
    if (root) {
        if (height == 0) {
            std::cout << root->data << " ";
        } else {
            printHeight(root->left, height - 1);
            printHeight(root->right, height - 1);
        }
    }
}

void levelOrder(Node * root) {
    int h = height(root);
    for (int i = 0; i < h; i++) {
        printHeight(root, i);
    }
}
