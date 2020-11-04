
#include<stdio.h>
int main()
{
	int num=0,i;
	char a;
	printf("ENTER BINARY PATTERN:");
	for (i=0;i<=15;i++)
	{ a=getchar();
	if (a=='0')
	num=num<<1;
    else if(a=='1')
    num=(num<<1)+1;
    else
    break;
	}
	printf("The integer number is %d",num); 
    return 0;
}

