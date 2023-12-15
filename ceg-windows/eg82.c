#include<stdio.h>
int main()
{
int x[5];
int *p;
int y,t;
p=x;
for(y=0;y<=4;y++)
{
printf("Enter a number : ");
scanf("%d",p);
p++;
}
for(p=x,y=0,t=0;y<=4;y++,p++)
{
t=t+*p;
}
printf("total is %d\n",t);
return 0;
}