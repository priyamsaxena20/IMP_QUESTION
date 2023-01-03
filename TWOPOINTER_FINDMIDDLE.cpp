#include <bits/stdc++.h> 
#include <bits/stdc++.h> 


*****************************************************************/
Node* getmiddle(Node* head){
    // base case
  if(head==NULL||head->next==NULL)
      return head;
      

    // agr do ho to kyunki agli bali angi hai
    if(head->next->next==NULL){
        return head->next;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
    fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }

return slow;
}
Node *findMiddle(Node *head) {
  return getmiddle(head);
}
