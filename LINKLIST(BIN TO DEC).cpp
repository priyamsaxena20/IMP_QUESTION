class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans=0;
        ListNode* temp=head;
        while(temp!=NULL){
            ans=ans*2;
            ans=ans+temp->val;
            temp=temp->next;
        }
       return ans;
    }
};
