class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if(head==NULL) 
            return NULL;
        if(head->next==NULL && n==1)
            return NULL; 
       ListNode* cur = head;
        ListNode* len = head;
        auto count = 0;
        while(cur->next != NULL){
            count++;
            cur = cur->next;
        }
        
        if(count==n-1){
            head = head->next;
            return head;
        }
        for(int i=1;i<count-n+1;i++){
            len = len->next;
        }
        len->next = len->next->next;
        return head;
    }
};
