// https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem?isFullScreen=true

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode *reversed = nullptr;
    
    for (DoublyLinkedListNode *curr = llist;
                               curr != nullptr;
                               curr = curr->next) {
        auto *newNode = new DoublyLinkedListNode(curr->data);
        if (reversed == nullptr) {
            newNode->next = nullptr;
            reversed = newNode;
        } else {
            newNode->next = reversed;
            reversed->prev = newNode;
            reversed = newNode;
        }
        if (curr->next == nullptr) {
            return newNode;
        }
    }
    return nullptr;
}