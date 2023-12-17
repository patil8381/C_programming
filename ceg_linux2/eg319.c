#include<stdio.h>
int main()
{
int x;
int y;
char *p;
x=1;
p=(char *)&x;

printf("Value of x is %d\n",x);
printf("Address of x is %lu\n",&x);

printf("Value of p is %lu\n",p);
printf("Value of block which p is pointing to %d\n",*p);
p++;

printf("Value of p is %lu\n",p);
printf("Value of block which p is pointing to %d\n",*p);
p++;

printf("Value of p is %lu\n",p);
printf("Value of block which p is pointing to %d\n",*p);
p++;

printf("Value of p is %lu\n",p);
printf("Value of block which p is pointing to %d\n",*p);


printf("Address of y is %lu\n",&y);
return 0;
}
