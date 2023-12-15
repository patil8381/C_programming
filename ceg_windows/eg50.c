#include<stdio.h>
int main()
{
unsigned int x;	// 1st bit is not sign bit
x=2147483659;
printf("%d\n",x);	// %d for int
printf("%u\n",x);	// %u for unsigned int
return 0;
} 