#include<stdio.h>
int main()
{
int x;
char *p;

x=0b0000100000000100000000010000000010; 	// 0b is prefix to make compiler understand that we are assigning a binary value 

p=(char *)&x;

printf("Value of x is %d\n",x);
printf("Address of x : %lu\n\n",&x);

printf("Address of pis : %lu\n",p);
printf("Value of bloack which p is pointing to %d\n\n",*p);
p++;

printf("Address of pis : %lu\n",p);
printf("Value of bloack which p is pointing to %d\n\n",*p);
p++;

printf("Address of pis : %lu\n",p);
printf("Value of bloack which p is pointing to %d\n\n",*p);
p++;

printf("Address of pis : %lu\n",p);
printf("Value of bloack which p is pointing to %d\n\n",*p);

return 0;
}
