#include<stdio.h>
int main()
{
int r,i,total;
printf("Enter requirements : ");
scanf("%d",&r);
int x[r];
for(i=0;i<r;i++)
{
printf("Enter a number : ");
scanf("%d",&x[i]);
}
for(total=0,i=0;i<r;i++)
{
total = total + x[i];
}
printf("total = %d\n",total);
return 0;
}