#include<stdio.h>
void input(int *ar,int n);
void output(int *ar,int n);
int main()
{
int *ar,n;
printf("ENTER SIZE OF ARRAY:");
scanf("%d",&n);
ar=(int *)malloc(n*sizeof(int));
input(ar,n);
output(ar,n);
return 0;
}		
void input(int *ar,int n)
{
int i;
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",ar+i);
}
}
void output(int *ar,int n)
{int i;	
printf(" Enter elements are:",n);
for(i=0;i<n;i++)
{
printf("\t%d",*(ar+i));
}
}
