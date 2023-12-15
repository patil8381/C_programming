#include<stdio.h>
void lmn(int p,int q)
{
int r;
r=p+q;
printf("Total is %d\n",r);
}
int main()
{
int x,y,z;
x=10;
y=20;
lmn(x,y);
printf("Cool\n");
x=100;
y=200;
lmn(x,y);
return 0;
}