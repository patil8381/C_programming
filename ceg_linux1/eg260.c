#include<stdio.h>

void sam()
{
static int x=1;
printf("%d\n",x);
x++;
}
int main()
{
sam();
sam();
sam();
sam();
return 0;
}
