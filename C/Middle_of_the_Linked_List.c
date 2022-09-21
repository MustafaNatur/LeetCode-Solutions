/* Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int len(struct ListNode* head) {
    struct ListNode* p = head;
    int counter = 0;
    while (p) {
        p = p->next;
        counter++;
    }
    return counter;
}

struct ListNode* middleNode(struct ListNode* head){
        struct ListNode* p1 = head;
        for (int i = 0; i < len(head)/2; i++) {
            p1 = p1 -> next;
        }
        return p1;
}