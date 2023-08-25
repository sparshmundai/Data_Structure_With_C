#include<stdio.h>
int main()
{
int arr[10], n, num,min,i;
printf("Enter the size of an array\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
min=arr[0];
for(i=0;i<n;i++)
if(arr[i]<min)
min=arr[i];
printf("Smallest number=%d\n",min);
}