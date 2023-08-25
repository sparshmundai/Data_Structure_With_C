#include<stdio.h>
#include<stdlib.h>
int CQueue[5],front=-1,rear=-1; //declaring stack globally
void enqueue(int CQueue[5]); //declaration of functions
void dequeue(int CQueue[5]);
void peek(int CQueue[5]);
int main()
{
int ch,i,size;
char choice;
do
{
printf("\n circular Queue implementation using arrays\n");
printf("1. ENQUEUE\n");
printf("2. DEQUEUE\n");
printf("3. PEEK\n");
printf("4. EXIT\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: enqueue(CQueue);
break;
case 2: dequeue(CQueue);
break;
case 3: peek(CQueue);
break;
case 4: exit(0);

default: printf("wrong choice\n");
}
}while(ch!=4);
}
void enqueue(int CQueue[5])
{
int elt,i;
printf("enter the element to be enqueued\n");
scanf("%d",&elt);
if((front==0&&rear==4)||(front==rear+1)) //isfull
{
printf("the circular queue is full\n" );
printf("no element can be inserted\n");

}
else //insert new element
{
if(front==-1)
{
front=rear=0;
CQueue[rear]=elt;
}
else if(rear==4)
{
rear=0;
CQueue[rear]=elt;
}
else
{
rear++;
CQueue[rear]=elt;
}
}

printf("\nthe queue is\n");
for(i=front;i<=rear;i++)
{
printf("%d\n",CQueue[i]);
}
}
void dequeue(int CQueue[5])
{
int i;
if(front==-1) //is empty
{
printf("circular queue is empty\n");
}
else // dequeing logic study with diagrams
{
printf("dequeued element is %d",CQueue[front]);
if(front==rear)
{
front=-1;
rear=-1;
}
else if(front==4)
{
front=rear;
}
else
{
front++;
}

}

printf("the queue is\n");
for(i=front;i<=rear;i++)
{
printf("%d\n",CQueue[i]);
}
}
void peek(int CQueue[5])
{
printf("first element is %d\n",CQueue[front]);
printf("last element is %d\n",CQueue[rear]);
}