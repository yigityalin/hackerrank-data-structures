// https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem?isFullScreen=true

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *node1 = head1;
    SinglyLinkedListNode *node2 = head2;
    auto list = SinglyLinkedList();
    while (node1 != nullptr && node2 != nullptr) {
        if (node1->data < node2->data) {
            list.insert_node(node1->data);
            node1 = node1->next;
        } else {
            list.insert_node(node2->data);
            node2 = node2->next;
        }
    }
    while (node1 != nullptr) {
        list.insert_node(node1->data);
        node1 = node1->next;
    }
    while (node2 != nullptr) {
        list.insert_node(node2->data);
        node2 = node2->next;
    }
    return list.head;
}