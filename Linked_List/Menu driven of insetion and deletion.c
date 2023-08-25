	 nh#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
	printf("--Enter the following number--\n");
	printf("Enter 1: Insertion\n");
	printf("Enter 2: Deletion\n");
	printf("Enter 3: Exit\n");
 	printf("-------------------\n");
	printf("Enter the choice :\n");
	scanf("%d",&choice);
	
	switch(choice)
{
	case 1:
{
	int arr[10],i, position, n,value;
	printf("Enter the size\n");
scanf("%d",&n);	
printf("Enter element of the array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the position\n");
scanf("%d",&position);
printf("Enter value to inserting\n"); 
scanf("%d",&value); 
for(i=n-1;i>=position-1; i--)
arr[i+1]=arr[i]; 
arr[position-1]=value;
printf("Array after insertion\n"); 
for(i=0;i<=n;i++)
printf("%d\n",arr[i]);
break;
}
case 2:
{
	int arr[10],i,size,pos,num;
	printf("Enter the size\n");
	scanf("%d",&size);
	printf("Enter the element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
printf("Enter the postion\n");
scanf("%d",&pos);
for(i=pos-1;i<size;i++)
{
	arr[i]=arr[i+1];
}
size--;
printf("Alterted array is\n");
for(i=0; i<size;i++)
printf("%d\t",arr[i]);
break;	
}
	case 3:
	{
		exit(0);
		break;
	}
	
    default:
	printf("Error\n");
}
}
