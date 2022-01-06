// https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list?isFullScreen=true

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode *node = llist;
    if (position == 0) {
        delete node;
        return llist->next;
    } else {
        for (int i = 0; i < position - 1; i++) {
            node = node->next;
        }
        SinglyLinkedListNode *toDelete = node->next;
        node->next = toDelete->next;
        delete toDelete;
        return llist;   
    }
}