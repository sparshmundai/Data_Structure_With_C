#include<stdio.h>
int main()
{
	int a[20],i,j,n,temp=0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the  array :\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-1-i;j++)
	{
	if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
	}
	printf("Sorted array is :)\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	
	
}