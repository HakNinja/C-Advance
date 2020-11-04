#include<stdio.h>
int greater(int*,int*);
int main()
    {int a,b,c;
	printf("\nEnter two numbers:\n");
		printf("a:");
	scanf("%d",&a);
		printf("b:");
		scanf("%d",&b);
	c=greater(&a,&b);
	if(c==1)
	printf("Equal values are entered");
	else
	printf("\nGreater number is:%d",c);
	return 0;
	}
	int greater(int *a,int*b)
	{if(*a>*b)
	return *a;
	else if(*a<*b)
	return *b;
	else
	return 1;
	}
