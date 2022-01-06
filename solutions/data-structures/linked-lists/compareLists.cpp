// https://www.hackerrank.com/challenges/compare-two-linked-lists/problem?isFullScreen=true

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *node1 = head1;
    SinglyLinkedListNode *node2 = head2;
    
    while (node1 != nullptr && node2 != nullptr) {
        if (node1->data != node2->data) {
            return false;
        }
        node1 = node1->next;
        node2 = node2->next;
    }
    return (node1 == nullptr && node2 == nullptr);
}