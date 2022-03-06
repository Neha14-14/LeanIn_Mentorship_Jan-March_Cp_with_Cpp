class Solution{
  public:
    
      Node *insertAtBegining(Node *head, int x) {
       
        Node *temp = new Node(x);
        
        if(head ==NULL)
        {
            return temp;
        }
        temp->next = head;
   
        return temp;
    }
    
    Node *insertAtEnd(Node *head, int x)  {
        Node *temp = new Node(x);
        
        if(head == NULL){
           return temp;
        }
        
        else{
            Node *ptr = head;
            
            while(ptr->next!=NULL)
                ptr = ptr->next;
                
            ptr->next = temp;
            temp->next = NULL;
        }
       return head;
    }
};
