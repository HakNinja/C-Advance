#include<stdio.h>
struct student
{
	int rno;
	float per;
	char name[30];
};
int main()
{int i,n;
	struct student x[100];
	printf("Enter number of students:\n");
	scanf("%d",&n);
	printf("Enter Details:\n");
	for(i=0;i<n;i++)
	{
	printf("Enter roll number:");
	scanf("%d",&x[i].rno);
	printf("Enter name of student:");
	scanf("%s",x[i].name);
	printf("Percentage:");
	scanf("%f",&x[i].per);
    }
	printf("\n------------------------------------------");
	printf("Enter Details are:\n");
	for(i=0;i<n;i++)
	{
	printf("\nRoll number:%d\n",x[i].rno);
	printf("\nName:%s\n",x[i].name);
	printf("Percentage:%f\n",x[i].per);
    }  
	return(0);
}
