// https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list?isFullScreen=true

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *node = llist;
    auto *newNode = new SinglyLinkedListNode(data);
    if (position == 0) {
        newNode->next = llist;
        return newNode;
    } else {
        for (int i = 0; i < position - 1; i++) {
            node = node->next;
        }
        newNode->next = node->next;
        node->next = newNode;
        return llist;
    }
}