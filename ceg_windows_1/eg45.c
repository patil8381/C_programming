#include<stdio.h>
int x;
void sam();
void tom();
int main()
{
x=10;
printf("%d\n",x);
sam();
printf("%d\n",x);
return 0;
}

int k;
void sam()
{
k=3333;
x=350;
tom();
printf("%d\n",k);
}
void tom()
{
k=404;
}