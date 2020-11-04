
#include<stdio.h>
int main()
{
	int a,mask=0X40;
	printf("ENTER NUMBER:");
	scanf("%d",&a);
    a=a^mask;
    printf("\nBit=%d",a);
    return 0;
}

