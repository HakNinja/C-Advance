
#include<stdio.h>
int main()
{
	int a,mask=0X20,bit;
	printf("ENTER NUMBER:");
	scanf("%d",&a);
	if ((a&mask)==0)
	bit=0;
	else
	bit=1;
    printf("Bit=%d",bit);
    return 0;
}

