
#include<stdio.h>
int main()
{
	int a,mask=0X1;
	printf("ENTER NUMBER:");
	scanf("%d",&a);
    if((a&mask)==0)
    printf("\n number is even");
    else{
    	printf("\n number is odd");
	}
    return 0;
}

