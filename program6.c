#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()

{
int a[100],i,n,sum;
float avg;
printf("How many Number Do You want to read into array?:");
scanf("%d",&n);
printf("now enter %d Numbers into Array\n",n);
/*read an array*/
for(i=0;i<n;i++)
{
printf("\n Enter Number %d",i+1);
scanf("%d",&a[i]);
}
/* print an array*/
printf("the given array is\n");
for(i=0;i<n;i++)
{
printf("a[%d] is = %d\n",i,a[i]);
}
/* finding sum here */
sum=0;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("sum is = %d\n",sum);
printf("Average is = %d",avg);
getch();
return 0;
}

