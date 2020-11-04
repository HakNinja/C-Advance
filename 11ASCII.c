#include<stdio.h>
int main()
{
    int c=0,C=0;
	char ch,*ptr;
	ptr=&ch;
	printf("\nEnter char in lower case:");
	scanf("%c",ptr);
	printf("ASCII value:%d",*ptr);
	printf("\nLower case:%c",*ptr-32);
	return(0);
}


