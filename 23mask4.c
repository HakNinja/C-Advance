
#include<stdio.h>
int main()
{
	int a,i,num=0;
	printf("ENTER NUMBER:");
	scanf("%d",&a);
	for (i=15;i>=0;i--)
	{num=1<<i;
    if((a&num)==0)
    printf("0");
    else{
    	printf("1");
	}
}
    return 0;
}

