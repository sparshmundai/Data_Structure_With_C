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
	
	printList(head);
	
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