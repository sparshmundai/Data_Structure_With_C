#include<stdio.h>
int main()
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
}