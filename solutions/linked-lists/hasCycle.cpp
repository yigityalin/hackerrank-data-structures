// https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem?isFullScreen=true

bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *prev = nullptr;
    SinglyLinkedListNode *node = head;
    while (node != nullptr) {
        if (node->next == head) {
            return true;
        }
        prev = node;
        node = node->next;
        prev->next = head;
    }
    return false;
}