#include<stdio.h>
int x;
void sam();
int main()
{
x=10;
printf("%d\n",x);
sam();
printf("%d\n",x);
return 0;
}
void sam()
{
int x;
x=203;
printf("%d\n",x);
}