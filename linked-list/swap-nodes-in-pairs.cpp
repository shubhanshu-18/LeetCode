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
    ListNode* swapPairs(ListNode* head) {
        {
        ListNode temp(0);
        temp.next=head;

        ListNode* pre=&temp;

        while (pre->next&&pre->next->next) {
            ListNode* first= pre->next;
            ListNode* second=first->next;

            first->next=second->next;
            second->next=first;
            pre->next=second;

            pre=first;
        }

        return temp.next;
    }

    }
};