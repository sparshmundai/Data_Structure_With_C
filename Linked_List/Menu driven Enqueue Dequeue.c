#include<stdio.h>
#include<stdlib.h>
#define Max 3
int queue[Max],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();

int main()
{
	int choice;
	printf("\__________\n");
	printf("\Choose from below       \n");
	printf("\The size is 3 \n");
	printf("\n1.Enqueue or Insert");
	printf("\n2.Dequeue or Delete");
	printf("\n3.Display");
	printf("\n4.Exit \n");
	printf("\__________");
	do
	{
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("You have enter wrong choice");	
				
		}
	}while(choice!=0);	
}
void enqueue()
{
	int data;
	
	if(rear==Max-1)
	{
		printf("can't add it's full''");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		printf("Enter the element:");
		scanf("%d",&data);
		rear++;
		queue[rear]=data;	
	}
}
void dequeue()
{
	if(front==-1 || front>rear)
	{
	printf("\n can't delete it's already empty ");
	}
	else
	{
	printf("\nDequeued: %d",queue[front]);
	front++;	
	}
}

void display()
{
	int i;
	if(front==-1)
	{
		printf("\nQueue is Empty");
	}
	else
	{
		printf("Elements:");
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}	
	}	
}