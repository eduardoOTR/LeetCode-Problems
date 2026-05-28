/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode *storeSum = head->next, *nextSum = head->next;

    while ( nextSum != NULL ) {
        int sum = 0;
        while ( nextSum->val != 0 ) {
            sum += nextSum->val;
            nextSum = nextSum->next;
        }
        
        storeSum->val = sum;
        nextSum = nextSum->next;
        storeSum->next = nextSum;
        
        if ( nextSum != NULL ) {
            storeSum = nextSum;
        }
    }
    
    return head->next;
}
