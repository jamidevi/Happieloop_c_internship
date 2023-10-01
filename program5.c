#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
int i,j,n;
printf("How many Lines?.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf(" %d ",j);
}
printf("\n");
}
getch();
return 0;
}
