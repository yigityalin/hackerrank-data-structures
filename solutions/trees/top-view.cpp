// https://www.hackerrank.com/challenges/tree-top-view/problem?isFullScreen=true&h_r=next-challenge&h_v=zen

/*
void topView(Node * root) {
    Node *node = root;
    left(root);
    right(root->right);
}

void left(Node *root) {
    if (root != nullptr) {
        left(root->left);
        std::cout << root->data << " ";
    }
}

void right(Node *root) {
    if (root != nullptr) {
        std::cout << root->data << " ";
        right(root->right);
    }
}
*/