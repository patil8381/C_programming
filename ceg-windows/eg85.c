#include<stdio.h>
int main()
{
int x[5];

printf("x is d format specifier %d\n",sizeof(x));
printf("x in llu format specifier %llu\n",sizeof(x));
printf("x[0] in d format specifier %d\n",sizeof(&x[0]));
printf("x[0] in llu format specifier %llu\n",sizeof(&x[0]));
return 0;
}