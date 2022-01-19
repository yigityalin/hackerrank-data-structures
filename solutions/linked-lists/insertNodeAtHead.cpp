// https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list?isFullScreen=true

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    auto *newNode = new SinglyLinkedListNode(data);
    newNode->next = llist;
    return newNode;
}