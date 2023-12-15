#include<stdio.h>
int lmn(int,int);
int main()
{
int x,y,z;
x=10;
y=20;
z=lmn(x,y);
printf("Total is %d\n",z);
printf("Cool\n");
x=100;
y=200;
z=lmn(x,y);
printf("Total is %d\n",z);
return 0;
}
int lmn(int p,int q)
{
int r;
r=p+q;
return r;
}