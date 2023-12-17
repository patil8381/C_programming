#include<stdio.h>
int x;
void sam()
{
x=200;
}
int main()
{
x=10;
printf("%d\n",x);
sam();
printf("%d\n",x);

return 0;
}
