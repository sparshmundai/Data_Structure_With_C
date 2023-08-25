#include<stdio.h>
int main()
{
	int arr[10][10];
	int i,j,r,c;
	printf("Enter the number of rows ");
	scanf("%d",&r);
	printf("Enter the number of columms ");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Entered data [%d][%d] - ",i ,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}