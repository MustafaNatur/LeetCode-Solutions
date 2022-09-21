/* Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.*/

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
    ListNode* middleNode(ListNode* head) {
        ListNode* p1 = head;
        for (int i = 0; i < len(head)/2; i++) {
            p1 = p1 -> next;
        }
        return p1;
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
};