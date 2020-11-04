 
#include<stdio.h>
struct NAME
{
	char fn[30],mn[30],ln[30];
};
struct date
{
	int d,m,y;
};
struct student
{
	int rno;
	float per;
	struct	NAME name;
	struct date dob;
        struct date doj;
};
int main()
{
	int u;
	struct student x;
	printf("Enter Details:\n");
	printf("Enter emp number:");
	scanf("%d",&x.rno);
	printf("Enter name of employee");
	printf("\nFirst name:");
	scanf("%s",&x.name.fn);
	printf("Middle name:");
	scanf("%s",&x.name.mn);
	printf("Last name:");
	scanf("%s",&x.name.ln);
	printf("Enter Date Of Birth");
	printf("\nDate:");
	scanf("%d",&x.dob.d);
	printf("Month:");
	scanf("%d",&x.dob.m);
	printf("Year:");
	scanf("%d",&x.dob.y);
	printf("Enter Date of joining");
	printf("\nDate:");
	scanf("%d",&x.doj.d);
	printf("Month:");
	scanf("%d",&x.doj.m);
	printf("Year:");
	scanf("%d",&x.doj.y);
	printf("Salary:");
	scanf("%f",&x.per);
	printf("\n-------------------------------------------");
	printf("\nEmp number:%d",x.rno);
	printf("\nName:%s %s %s\n",x.name.fn,x.name.mn,x.name.ln);
	printf("Date of birth:%d/%d/%d\n",x.dob.d,x.dob.m,x.dob.y);
	printf("Date of joining:%d/%d/%d\n",x.doj.d,x.doj.m,x.doj.y);
	printf("Age:%d\n",x.doj.y-x.dob.y);        
	printf("Salary:%f\n",x.per);
	
	return(0);
}
