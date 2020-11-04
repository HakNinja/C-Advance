
#include<stdio.h>
#include<stdlib.h>
void and();
void or();
void xor();
void lsh();
void rsh();
void com();
int a,b,c;
int main()
{int d;
while(1)
{printf("\n_________________________________\n");
printf("\n\tBITWISE OPERATOR:\n");
printf("\nPress 1,AND");	
printf("\nPress 2,OR");
printf("\nPress 3,XOR");
printf("\nPress 4,LEFT-SHIFT");
printf("\nPress 5,RIGHT-SHIFT");	
printf("\nPress 6,COMPLEMENT");
printf("\nPress 0,QUIT");
printf("\n    Input:");
fflush(stdin);
scanf("%d",&d);
switch(d)
{case 1:and();
break;
case 2:or();
break;
case 3:xor();
break;	
case 4:lsh();
break;
case 5:rsh();
break;
case 6:com();
break;
case 0:
exit(1);
default:printf("Invalid input!!!"); 	
}
}
return 0;
}
void and()
{
	printf("Enter first value:");
scanf("%d",&a);
printf("Enter second value:");
scanf("%d",&b);
	c=a&b;
printf("Bitwise AND value:%d",c);
}
void or()
{
	printf("Enter first value:");
scanf("%d",&a);
printf("Enter second value:");
scanf("%d",&b);
	c=a|b;
printf("Bitwise OR value:%d",c);
}	
void xor()
{
	printf("Enter first value:");
scanf("%d",&a);
printf("Enter second value for shifting:");
scanf("%d",&b);
	c=a^b;
printf("Bitwise XOR value:%d",c);
}
void lsh()
{
	printf("Enter first value:");
scanf("%d",&a);
printf("Enter second value for shifting:");
scanf("%d",&b);
	c=a<<b;
printf("Bitwise LEFT-SHIFT value:%d",c);
}
void rsh()
{
	printf("Enter first value:");
scanf("%d",&a);
printf("Enter second value for shifting:");
scanf("%d",&b);
	c=a>>b;
printf("Bitwise RIGHT-SHIFT value:%d",c);
}
void com()
{
	printf("Enter first value:");
scanf("%d",&a);
	c=~a;
printf("Bitwise complement value:%d",c);
}	
