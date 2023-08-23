int getCount(struct Node* head)
    {
        struct Node* ptr=head;
        int cnt =0;
        while(ptr!=NULL){
            ptr=ptr->next;
            cnt++;
        }
        return cnt++;
        
        
    }
