#include<stdio.h>
int main()
{
int arr[10],pos, n,num,i;
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the elements of an array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the position\n");
scanf("%d",&pos);
printf("Enter the new element\n");
scanf("%d",&num);
arr[pos-1]=num;
printf("Enter after replacement\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
}