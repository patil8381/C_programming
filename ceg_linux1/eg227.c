#include<stdio.h>
void sam(int e)
{
e=200;
}
int main()
{
int x;
x=10;
printf("%d\n",x);
sam(x);
printf("%d\n",x);

return 0;
}
