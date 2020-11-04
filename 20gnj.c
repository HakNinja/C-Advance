
#include<stdio.h>
int main()
{
	int a,mask=0X40,bit;
	printf("ENTER NUMBER:");
	scanf("%d",&a);
	bit=a|mask;
    printf("Bit=%d",bit);
    return 0;
}







/*  OUTPUT:

ENTER NUMBER:32
Bit=96

*/
