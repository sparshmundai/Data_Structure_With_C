#include<stdio.h>
#include<stdlib.h>
int queue[5],front=-1,rear=-1,size=10;
void insertion(int x)
{
if ((front == 0 && rear == size - 1) || (front == rear + 1))
printf("Queue is full");
else if (rear == - 1)
{
rear++;
front++;
}
else if (rear == size - 1 && front > 0)
{
rear = 0;
}
else
{
rear++;
}
queue[rear] = x;
}



void deletion()
{
if (front == - 1)
{
printf("Queue is empty ");
}
else if (front == rear)
{
printf("\n %d deleted", queue[front]);
front = - 1;
rear = - 1;
}
else
{
printf("\n %d deleted", queue[front]);
front++;
}
}
void display()
{
int i;
printf("\n");
if (front > rear)
{
for (i = front; i < size; i++)
{
printf("%d ", queue[i]);
}
for (i = 0; i <= rear; i++)
printf("%d ", queue[i]);
}
else
{
for (i = front; i <= rear; i++)
printf("%d ", queue[i]);
}
}
int main()
{
int ch,x;
while(1)
{
printf("\n1.Insetion\n2.Deletion\n3.Display\n4.Exit\n Enter the choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the element to be inserted\n");
scanf("%d",&x);
insertion(x);
break;
case 2:deletion();
break;
case 3:display();
break;
case 4:exit(0);
default:
printf("\n Wrong choice!");
}
}
}



