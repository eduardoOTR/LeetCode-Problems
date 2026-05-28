/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* current = head;
    int length = 0;

    while ( current != NULL ) {
        length++;
        current = current->next;
    }

    if ( n == length ) {
        struct ListNode* newHead = head->next;
        return newHead;
    }

    current = head;
    for ( int i = 0; i < length - n - 1; i++ ) {
        current = current->next;
    }

    current->next = current->next->next;

    return head;
}
