class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node *prev,*current,*Nex;
        if(head==NULL||head->next==NULL){ // only 1 node and no node case
            return head;
        }
        
        
        current=head;
        prev=NULL;
        while(current!=NULL){
            Nex=current->next;
            current->next=prev;
            prev=current;
            current=Nex;
            
        }
        return prev;
        
    }
    
};
