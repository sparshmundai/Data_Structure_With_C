#include<stdio.h>
main()
{
int arr[100], n, i, j, temp;
printf("Enter the number of elements in an array\n");
scanf("%d", &n);
printf("Enter the %d elements\n", n);
for(i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
for(i=1; i<n; i++)
{
temp = arr[i];
for(j=i-1; j>=0 && temp<arr[j] ; j--)
{
arr[j+1] = arr[j];
}
arr[j+1]=temp;
}
printf("Sorted array is:- \n");
for(i=0; i<n; i++)
{
printf("%d\n", arr[i]);
}
}