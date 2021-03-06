class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL)
        {
            ListNode* ne = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ne;
        }
        head = prev;
        return head;
    }
};
