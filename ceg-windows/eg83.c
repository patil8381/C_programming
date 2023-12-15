#include<stdio.h>
int sum(int *, int);
int main()
{
int x[5];
int y,total;
for(y=0;y<=4;y++)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
}
total=sum(&x[0],5);
printf("Total is %d\n",total);

return 0;
}
int sum(int *p,int sz)
{
int y,t;
for(y=0,t=0;y<sz;y++,p++)
{
t=t+*p;
}
return t;
}