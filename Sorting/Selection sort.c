#include<stdio.h>
int main()
{
int arr[100], i, j, n, temp, pos;
printf("Enter the length of array \n");
scanf("%d", &n);
printf("Enter the elements \n",n);
for(i=0; i<n; i++)
{
scanf("%d", &arr[i]);
}
for(i=0; i<n; i++)
{
pos = i;
for(j=0; j<n; j++)
{
if(arr[pos]<arr[j])
{
pos = j;
}
if(pos!=i)
{
temp = arr[i];
arr[i] = arr[pos];
arr[pos] = temp;
}
}
}
printf("Sorted array is \n");
for(i=0; i<n; i++)
{
printf("%d\n", arr[i]);
}
}