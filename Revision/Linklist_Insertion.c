//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


// } Driver Code Ends
//User function Template for C

//Function to insert a node at the begin of the linked list.
struct Node *insertAtBegining(struct Node *head, int x) {


	//code here
	struct Node *temp;
	temp=malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	//head=temp;
	return temp;
}


//Function to insert a node at the end of the linked list.
struct Node *insertAtEnd(struct Node *head, int x)  {

	//code here
	struct Node* temp;
	struct Node* ptr=head;
	temp=malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=NULL;
	if(head==NULL){
	    return temp;
	    
	}
//	ptr=head;
	while(ptr->next!=NULL){
	    ptr=prt->next;
	}
	ptr->next=temp;
	return head;
}
