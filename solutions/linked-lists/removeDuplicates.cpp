// https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem?isFullScreen=true

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    auto head = new SinglyLinkedListNode(llist->data);
    SinglyLinkedListNode *currNew = head;
    int lastAdded = llist->data;
    for (SinglyLinkedListNode *curr = llist->next;
                               curr != nullptr;
                               curr = curr->next) {
        if (curr->data != lastAdded) {
            currNew->next = new SinglyLinkedListNode(curr->data);
            currNew = currNew->next;
            currNew->next = nullptr;
            lastAdded = curr->data; 
        }
    }
    return head;
}