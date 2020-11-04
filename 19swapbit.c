
#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER NUMBERS");
	printf("\nA:");
	scanf("%d",&a);
	printf("B:");
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
    printf("NUMBERS AFTER SWAP: A=%d  B=%d",a,b);
    return 0;
}
