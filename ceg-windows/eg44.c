#include<stdio.h>
int add(int,int);
int main()
{
int x,y,z;
x=10;
y=20;
z=add(x,y);
printf("Total is %d\n",z);
printf("Cool\n");
x=100;
y=200;
z=add(x,y);
printf("Total is %d\n",z);
return 0;
}
int add(int p,int q)
{
int r;
r=p+q;
return r;
}