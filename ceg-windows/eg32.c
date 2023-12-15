#include<stdio.h>
int main()
{
int x;
x=1;
do
{
printf("%d\n",x);
if(x==3)
{
x=17;
continue;
}
x++;
}while(x<=15);

return 0;
}