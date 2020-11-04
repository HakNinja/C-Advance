#include<stdio.h>
int main()
{int c=0,C=0;
	char ch,*ptr;
	ptr=&ch;
	do
	{fflush(stdin);
	printf("\n---------------------------------------");
	printf("\nEnter char:");
	scanf("%c",ptr);
	if(*ptr<='z'&&*ptr>='a')
	{
	printf("Lower case alphabet");
    *ptr-=32;
    printf("\nupper case will be:%c",*ptr);
	c++;
    }
	else if (*ptr<='Z'&&*ptr>='A')
	{
	printf("Upper case alphabet");
    *ptr+=32;
	printf("\nlower case will be:%c",*ptr);
	C++;
    }
    }while(*ptr!='#');
    printf("number of lower case elements:%d",c);
    printf("\nnumber of upper case elements:%d",C);
	return(0);
}
