#include<stdio.h>
int main()
{
int k;
int *u;
u=&k;
u[0]=1002;
printf("%d\n",k);
return 0;
}