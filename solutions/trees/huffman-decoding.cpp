// https://www.hackerrank.com/challenges/tree-huffman-decoding/problem?isFullScreen=true

void decode_huff(node * root, string s) {
    node *curr = root;
    for (int i = 0; i < s.size(); i++) {
        if (s.substr(i, 1) == "1") {
            curr = curr->right;
        } else if (s.substr(i, 1) == "0") {
            curr = curr->left;
        }
        if (curr->left == nullptr && curr->right == nullptr) {
            std::cout << curr->data;
            curr = root;
        }
    }
}