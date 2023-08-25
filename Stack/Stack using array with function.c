#include<stdio.h>
#include<stdlib.h>
int stack[5],top=-1;
 void push()
 {
 int num ;
 printf("Enter the element to push\n");
 scanf("%d",&num);
 if(top==5-1)
 {
 printf("Stack is already full\n");
 }
 else
 {
 top++;
 stack[top]=num;
 }
 }
 void pop()
 {
 int num;
 if(top==-1)
 {
printf("Stack is empty\n");
}
else
{
num=stack[top];
top--;
printf("Popped=%d\n",num); 
}
}
void display()
{
int i;
printf("The resultant stack is:)\n");
if(top==-1)
{
printf("Stack is empty\n");
}
for(i=top;i>=0;i--)
{  	    
printf("%d\n",stack[i]); 
}
}
int main()
{
int ch;
do
{
printf("Stack implementation using arrays\n");
printf("1. PUSH   2. POP 4. Display   0. Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 0: exit(0);
default: printf("wrong choice\n");
} 
}while(ch!=0);
}
