#include<stdio.h>
int main()
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
}
