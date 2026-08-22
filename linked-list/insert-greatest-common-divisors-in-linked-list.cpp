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
    int divisor(int a,int b){
        while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head){
            if(!head->next) return head;
            ListNode* prev=head;
            ListNode* cur=head->next;
            while(cur){
                int DIV=divisor(prev->val,cur->val);

                ListNode* temp= new ListNode(DIV);
                temp->next=cur;
                prev->next=temp;
                prev=cur;
                cur=cur->next;
            }
            return head;
        }
        return head;

    }
};