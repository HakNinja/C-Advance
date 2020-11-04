#include<stdio.h>
void swap(int*,int*);
int main()
    {int a,b;
	printf("\nEnter value to be swap:\n");
		printf("a:");
	scanf("%d",&a);
		printf("b:");
		scanf("%d",&b);
	swap(&a,&b);
		printf("\nValues after swap:\n");
		printf("a=%d",a);
				printf("\nb=%d",b);
	return 0;
	}
	void swap(int *a,int*b)
	{int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	}
