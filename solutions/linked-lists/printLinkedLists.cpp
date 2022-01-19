// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list?isFullScreen=true

void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *node = head;
    while (node != NULL) {
        cout << node->data << endl;
        node = node->next;
    }
}