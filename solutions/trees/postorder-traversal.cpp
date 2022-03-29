// https://www.hackerrank.com/challenges/tree-postorder-traversal/problem?isFullScreen=true

void postOrder(Node *root) {
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        std::cout << root->data << " ";
    }
}