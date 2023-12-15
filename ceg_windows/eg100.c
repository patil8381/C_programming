// GOING OUT OF BOUNDS 

#include<stdio.h>
int main()
{
int x[5];
x[100000]=100;
x[2000000]=200;
x[10000000000]=100;
printf("%d\n",x[100000]);
printf("%d\n",x[2000000]);
printf("%d\n",x[10000000000]);
return 0;
}