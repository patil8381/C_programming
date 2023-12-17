#include<stdio.h>
#include<stdalign.h>

int main()
{
//alignof is a macro that can be use to determine the allingment factor .
//printf("size is %lu, and allignment factor of int data type is %lu\n",sizeof(int),alignof(int));

int x;
char m;
int h;
char g;
double u;

printf("Address of x is %lu\n",&x);
printf("Address of m is %lu\n",&m);
printf("Address of h is %lu\n",&h);
printf("Address of g is %lu\n",&g);
printf("Address of u is %lu\n",&u);
printf("---------------------------\n");
printf("%lu\n", ((unsigned long)&x)%alignof(x));
printf("%lu\n", ((unsigned long)&m)%alignof(m));
printf("%lu\n", ((unsigned long)&h)%alignof(h));
printf("%lu\n", ((unsigned long)&g)%alignof(g));
printf("%lu\n", ((unsigned long)&u)%alignof(u));

return 0;
}
