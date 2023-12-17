#include<stdio.h>

#define ABCD(x,...)\
printf("%d\n",x);\
printf(#__VA_ARGS__)

int main()
{
ABCD(10,20,30,40,50);
ABCD(100,200);

return 0;
}
