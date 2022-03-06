class Solution {
public:
    bool hasCycle(ListNode *head) {
     unordered_set<ListNode*> s;
       
        while(head!=NULL){
        s.insert(head);
        head=head->next;
            
        if(s.find(head)!=s.end())
            return true;
        }
        
        return false;   
    }
};
