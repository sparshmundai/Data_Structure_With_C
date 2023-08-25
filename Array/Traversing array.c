#include<stdio.h>
int main()
{
	int size[10];
	int i,n;
	printf("Enter the size");
	scanf("%d",&n);
	
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	scanf("%d",&size[i]);
	
	printf("After traversing\n");
	for(i=0;i<n;i++)
	
	printf("%d\t",size[i]);
}