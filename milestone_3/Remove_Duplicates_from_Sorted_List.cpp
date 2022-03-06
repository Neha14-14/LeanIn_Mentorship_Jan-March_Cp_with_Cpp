class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode * prev = head;
        if(head == NULL){
            return head;
        }
        ListNode * temp = head->next;
        while(temp!=NULL){
            if(prev->val == temp->val){
                prev->next = temp->next;
                ListNode * t = temp->next;
                temp->next = NULL;
                temp = t;
            }
            else{
                prev = prev->next;
                temp = temp->next;
            }
        }
              return head; 
    }
};
