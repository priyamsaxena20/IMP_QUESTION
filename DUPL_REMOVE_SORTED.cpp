Node * uniqueSortedList(Node * head) {
      if(head==NULL)
          return NULL;
        
    Node* curr=head;
    
    while(curr!=NULL){
        // eqal data wala caser
        if((curr->next!=NULL)&&curr->data==curr->next->data){
            Node* next_next=curr->next->next;
            Node* nodedelete=curr->next;
            delete(nodedelete);
            curr->next=next_next;   
        }
        else{

        curr=curr->next;
        }     
        
    }
      return head;
}
