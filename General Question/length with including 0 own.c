#include<stdio.h>
#include<string.h>
int main()
{
	char line[20];
	int i,length;
	printf("Enter the string\n");
	gets(line);
	for(i=0;line[i]!='\0';i++)
	printf("Lenght of the string %d\n",i);
}