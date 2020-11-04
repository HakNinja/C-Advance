#include<stdio.h>
void input(int *ar,int n);
void output(int *ar,int n);
int main()
{
int *ar,n,i;
printf("ENTER SIZE OF ARRAY:");
scanf("%d",&n);
ar=(int *)malloc(n*sizeof(int));
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",ar+i);
}
printf("Enter elements are:\n");
for(i=0;i<n;i++)
{
printf("value=%d\taddress=%u\n",*(ar+i),ar+i);
}
return 0;
}		

