#include<stdio.h>
int main()
{
int x[5];
int *p;
p=&x[0];
printf("Address of &x[0] is %llu\n",&x[0]);
printf("p=&x[0], hence address in p is %llu\n",&x[0]);
printf("Address of &x[1] is %llu\n", &x[1]);
p++;
printf("p++ , hence address in p is %llu\n",p);
printf("Address of &x[2] is %llu\n",&x[2]);
p++;
printf("p++, hence address in p is %llu\n",p);
printf("Address of &x[3] is %llu\n",&x[3]);
p++;
printf("p++, hence address in p is %llu\n",p);
printf("Address of &x[4] is %llu\n",&x[4]);
p++;
printf("p++, hence address in p is %llu\n");
return 0;
}