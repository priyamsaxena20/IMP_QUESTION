/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
void insertattail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}

Node* sortList(Node *head)
{
  Node* zerohead=new Node(-1);
  Node* zerotail=zerohead;
  Node* onehead=new Node(-1);
  Node* onetail=onehead;
  Node* twohead=new Node(-1);
  Node* twotail=twohead;
    Node* curr=head;
    // yha seperate list bna di 0 1 2 k liye
    while(curr!=NULL){
        int value=curr->data;
        if(value==0)insertattail(zerotail,curr);
        else if(value==1)insertattail(onetail,curr);
        else if(value==2)insertattail(twotail,curr);
        curr=curr->next;
          
    }
    // mertge kar ba do
    // 1s bali list empy nhi hai
    if(onehead->next!=NULL){
   zerotail->next=onehead->next;
    }
    else{
        zerotail->next=twohead->next;
    }
    onetail->next=twohead->next;
    twotail->next=NULL;
    // head
     head=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
      
    return head;
}
