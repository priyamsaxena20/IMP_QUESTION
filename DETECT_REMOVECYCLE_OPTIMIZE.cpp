/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
Node* floydcycle(Node* head){
    if(head==NULL){
        return false;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            
            
           // cout<<"present"<<slow->data<<endl;
            return slow;
        }
            
    }
    return NULL;
    
}



Node* startingnode(Node* head){
    
    if(head==NULL){
        return false;
    }
    
    Node* intersact=floydcycle(head);
    
    if(intersact==NULL)
        return NULL;
    
    Node* slow=head;
    while(slow!=intersact){
        slow=slow->next;
        intersact=intersact->next;
    }
    
    return slow;
    
    
}


Node *removeLoop(Node *head)
{
       if(head==NULL){
        return NULL;
    }
    
    Node* startloop=startingnode(head);
    
    if(startloop==NULL)
       return head;
    
    Node* temp=startloop;
    while(temp->next!=startloop){
        temp=temp->next;
    }
    
    
    temp->next=NULL;
    return head;
    
}
