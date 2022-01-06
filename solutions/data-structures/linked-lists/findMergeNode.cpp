// https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem?isFullScreen=true

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    auto *newNode = new SinglyLinkedListNode(0);
    while (head1 != NULL) {
        SinglyLinkedListNode *tmp = head1;
        head1 = head1->next;
        tmp->next = newNode;
    }
    while (head2->next != newNode){
        head2 = head2->next;
    }
    return head2->data;
}