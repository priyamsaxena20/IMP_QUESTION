class Solution{
  private:
  Node* getmid(Node* head){
      Node* slow=head;
      Node* fast=head->next;
      while(fast!=NULL||fast->next!=NULL){
          fast=fast->next->next;
          slow=slow->next;
      }
      
     return slow;
      
  }
  Node* reverse(Node* head){
      
      Node* curr=head;
      Node* prev=NULL;
      Node* next=NULL;
      while(curr!=NULL){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
          
          
          
      }
      return prev;
      
      
      
  }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head==NULL||head->next==NULL)return true;
        // step1 mid nikalo
        Node* mid=getmid(head);
        // revers list after middle
        Node* temp=mid->next;
        mid->next=reverse(temp);
        // step3 compare oth halfs
        Node* head1=head;
        Node* head2=mid->next;
        while(head2!=NULL){
            
            if(head1->data!=head2->data)return false;
            
            head1=head1->next;
            head2=head2->next;
            
        }
        
        return true;
        
        
        
    }
};
