#include<stdio.h>
int main()
{
int x[5];
int *p;
int y,t;
p=x;
*p=100;
p++;
*p=200;
p++;
*p=300;
p++;
*p=400;
p++;
*p=500;
for(y=0;y<=4;y++)
{
printf("%d\n",x[y]);
}
for(p=x,y=0,t=0;y<5;y++,p++)
{
t=t+*p;
}
printf("Total is %d\n",t);
return 0;
}