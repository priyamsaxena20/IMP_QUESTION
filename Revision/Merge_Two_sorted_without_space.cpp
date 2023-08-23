Node* sortedMerge(Node* a, Node* b)  
{  
  Node *first=NULL;
  Node *last=NULL;
  if(a==NULL)
   return b; // agar ek khali hao
   if(b==NULL)
   return a;
   if(a->data < b->data)
   {
       first=last=a;
       a=a->next;
       
   }
   else
   {
       first=last=b;
       b=b->next;
   }
   while(a!=NULL && b!=NULL)
   {
       if(a->data < b->data)
       {
           last->next=a;
           last=a;
           a=a->next;
           
       }
       else{
           last->next=b;
           last=b;
           b=b->next;
       }
   }
   if(a==NULL){
       last->next=b;
   }
   else{
       last->next=a;
   }
   return first;
  
}
