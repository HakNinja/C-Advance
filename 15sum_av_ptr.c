#include<stdio.h>
void input(int *ar,int n);
void output(int *ar,int n);
int main()
{
int i=12,*pi=&i;
float f=3.98,*pf=&f;
float c='a',*pc=&c;
printf("\nvalue=%d ,address of pi=%u",*pi,pi);
printf("\nvalue=%f ,address of pf=%u",*pf,pf);
printf("\nvalue=%c ,address of pc=%u",*pc,pc);
pf++,pi++,pc++;
printf("\naddress of pi=%u",pi);
printf("\naddress of pf=%u",pf);
printf("\naddress of pc=%u",pc);
return 0;
}		
