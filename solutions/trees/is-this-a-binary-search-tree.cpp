// https://www.hackerrank.com/challenges/is-binary-search-tree/problem?isFullScreen=true

bool checkBST(Node* root) {
    int min = 0;
    int max = 1e4;
    return check_subtree(root, min - 1, max + 1);
}

bool check_subtree(Node *root, int min, int max) {
    if (root) {
        if ((min < root->data) && (root->data < max)) {
            return check_subtree(root->left, min, root->data) && check_subtree(root->right, root->data, max);
        } else {
            return false;
        }
    }
    return true;
}