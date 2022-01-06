// https://www.hackerrank.com/challenges/reverse-a-linked-list/problem?isFullScreen=true

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *head = nullptr;
    for (SinglyLinkedListNode *curr = llist;
                               curr != nullptr;
                               curr = curr->next) {
        auto newNode = new SinglyLinkedListNode(curr->data);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        if (curr->next == nullptr) {
            return newNode;
        }
    }
    return nullptr;
}