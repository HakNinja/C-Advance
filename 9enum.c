#include<stdio.h>
enum week
    {mon=1,tue,wed}y;
	
int main()
    {
	printf("\nEnter number of respected day[1,2,3]:");
	scanf("%d",&y);
	if(y==wed)
	printf("\nday is wednesday.");
    else if(y==tue)
	printf("\nday is tuesday.");
	else if(y==mon)
	printf("\nday is monday.");
	else
	printf("Invalid");
	return 0;
	}
