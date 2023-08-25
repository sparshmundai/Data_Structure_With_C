#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;	
};
    struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	
void printList(struct node *head);
void insertbeg(struct node *head);
int main()
{
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	insertbeg(head);
}
void printList(struct node *head)
{
	struct node *n;
	n=head;
	printf("The node are:\n");
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n=n->next;
	}
}
void insertbeg(struct node * head)
 {
 struct node *newnode;
 int item;
newnode= (struct node *) malloc(sizeof(struct node *));
 
 printf("Enter value\n");
 scanf("%d",&item);
newnode->data = item;
newnode->next = head;
 head = newnode;
 printf("Node inserted \n");
 
 printList(head);
 }

