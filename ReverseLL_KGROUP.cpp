

Node* kReverse(Node* head, int k) {
    // bbe case
    if(head==NULL){
      return NULL;
        
    }
    // K NODES 
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int cnt=0;
    while(curr!=NULL&& count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    if(next!=NULL){

    head->next=kReverse(next,k);
    }
    
}
