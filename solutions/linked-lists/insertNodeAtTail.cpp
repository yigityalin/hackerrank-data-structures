// https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list?isFullScreen=true

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if (head == nullptr) {
        head = new SinglyLinkedListNode(data);
    } else {
        SinglyLinkedListNode *node = head;
        while (node->next != nullptr) {
            node = node->next;
        }
        node->next = new SinglyLinkedListNode(data);
    }
    return head;
}