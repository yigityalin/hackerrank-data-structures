// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem?isFullScreen=true

void reversePrint(SinglyLinkedListNode* llist) {
    if (llist == nullptr) return;
    reversePrint(llist->next);
    cout << llist->data << endl;
}