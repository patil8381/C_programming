#include<stdio.h>
int add(int *p,int sz)
{
int t,y;
for(y=0,t=0;y<sz;y++,p++)
{
t=t+*p;
}
return t;
}
int main()
{
int x[5];
int y,t;
for(y=0;y<=4;y++)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
}
t=add(x,sizeof(x)/sizeof(&x[0]));
printf("Total is %d\n",t);
return 0;
}