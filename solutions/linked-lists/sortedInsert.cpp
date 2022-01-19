// https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem?isFullScreen=true

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    auto newNode = new DoublyLinkedListNode(data);
    if (llist == nullptr) {
        newNode->prev = nullptr;
        newNode->next = nullptr;
        llist = newNode;
    } else {
        DoublyLinkedListNode *prevNode = nullptr;
        DoublyLinkedListNode *currNode = llist;
        while (currNode != nullptr && currNode->data < data) {
            prevNode = currNode;
            currNode = currNode->next;
        }
        newNode->prev = prevNode;
        newNode->next = (currNode != nullptr) ? currNode : nullptr;
        if (prevNode == nullptr) {
            return newNode;
        }
        prevNode->next = newNode;
    }
    return llist;
}