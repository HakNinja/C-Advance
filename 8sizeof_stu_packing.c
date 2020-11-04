#include<stdio.h>
#pragma pack(1)
struct student
{
int rno;
float per;
char name[30];
};
union stud
{int rno;
char name[30];
float per;
};
int main()
{
	printf("size of struct student:%d",sizeof(struct student));
	printf("\nsize of union stud:%d",sizeof(union stud));
	return(0);
}
