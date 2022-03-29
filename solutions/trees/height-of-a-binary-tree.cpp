// https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?isFullScreen=true

int height(Node* root) {
    if (root == nullptr) {
        return -1;
    }
    return 1 + max(height(root->left), height(root->right));
}