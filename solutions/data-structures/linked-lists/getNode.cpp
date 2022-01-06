// https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem?isFullScreen=true

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int size = 0;
    for (SinglyLinkedListNode *curr = llist;
                               curr != nullptr;
                               curr = curr->next) {
        size++;
    }
    SinglyLinkedListNode *node = llist;
    for (int i = 0; i < size - positionFromTail - 1; i ++) {
        node = node->next;
    }
    return node->data;
}