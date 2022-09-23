//Given the head of a linked list, remove the nth node from the end of the list and return its head.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len1 = len(head);
        int index = len1 - n;
        find(head, index - 1) -> next = find (head, index + 1);
        return head;
    }
    
    int len(ListNode* head) {
        ListNode* p = head;
        int counter = 0;
        while (p) {
            p = p->next;
            counter++;
        }
        return counter;
    }
    
    ListNode* find(ListNode* head, int n) {
        ListNode *p = head;
        for (int i = 0; i < n; i++) {
            p = p -> next;
        }
        return p;
    }
};