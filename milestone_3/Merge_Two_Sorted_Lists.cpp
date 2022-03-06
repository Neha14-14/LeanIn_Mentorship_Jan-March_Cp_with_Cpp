class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)  {
       ListNode* node = new ListNode(-1);
        auto res = node;
        while(true){
            if(!list1) node->next = list2;
            if(!list2) node->next = list1;
            if(!list1 || !list2) break;
            if(list1->val <= list2->val){
                node->next = list1;
                node = node->next;
                list1 = list1->next;}
            else{
                node->next = list2;
                node = node->next;
                list2 = list2->next;}
             }
        return res->next;}
};
