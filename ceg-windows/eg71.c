#include<stdio.h>
void lmn(int ,int ,int *,int * );
int main()
{
int x,y,a,b;
x=10;
y=3;
lmn(x,y,&a,&b);
printf("%d\n",a);
printf("%d\n",b);
return 0;
}
void lmn(int p,int q,int *r,int *s)
{
*r = p+q;
*s = p-q;
}