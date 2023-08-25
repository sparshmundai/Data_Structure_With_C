#include<stdio.h>
int main()
{
int a[10], i, size, num, flag=0;
printf("Enter size of array\n");
scanf("%d", &size);
printf("Enter the array elements\n");
for(i=0; i<size; i++)
scanf("%d", &a[i]);
printf("Enter the element to be searched = \n");
scanf("%d", &num) ; 
for (i=0;i<size;i++)
{
if(a[i]==num)
{
printf("Found at %d\n",i);
flag=0;
break;
}
else 
 flag=1;
}
if (flag==1)
printf("Not found\n");
}