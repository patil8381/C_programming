#include<stdio.h>
int main()
{
int x,y;
int *z;
x=10;
y=20;
z=&x;
*z=559;
printf("%d\n",x);
z=&y;
*z=51;
printf("%d\n",y);
z=NULL;
return 0;
}