#include<stdio.h>
int x;
void sam();
void pqr();
void lmn();
int main()
{
x=10;
printf("%d\n",x);
sam();
printf("%d\n",x);
pqr();
printf("%d\n",x);
lmn();
printf("%d\n",x);

y=101;		//incorrect bcz it was not declared before accessing

return 0;
}
int y;
void sam()
{
x=50;
y==200;
}
void pqr()
{
x=60;
y=220;
}
void lmn()
{
x=70;
y=250;
}
